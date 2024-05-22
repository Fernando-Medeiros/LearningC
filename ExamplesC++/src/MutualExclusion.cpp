#include <atomic>
#include <chrono>
#include <format>
#include <iostream>
#include <memory>
#include <mutex>
#include <shared_mutex>
#include <thread>

using
std::cout,
std::mutex,
std::shared_mutex,
std::thread,
std::atomic,
std::format,
std::lock_guard,
std::chrono::microseconds,
std::this_thread::get_id,
std::this_thread::sleep_for;

class StoreBook {
private:
	unsigned int amount{};
	unsigned int count{};
public:
	StoreBook(unsigned int value) : amount(value) {}

	unsigned int get_amount()const { return amount; }
	/*
	* O "LOCK_GUARD" usa o escopo do metodo para lidar com a exclusão mutua,
	* alterando o valor do mutex para "locked" no inicio,
	* e liberando o acesso somente ao termino do escopo com "unlocked".
	*/
	void sell(unsigned int value, mutex& guard) {
		lock_guard<mutex> lock{ guard };
		amount -= value;
		cout << format("{} sell {} = {}\n", get_id(), value, amount);
	}
	/*
	* O THREAD que tentar acessar esse escopo vai passar no "TRY_LOCK",
	* caso esteja fechado, ele segue para a próxima tarefa,
	* evitando que o THREAD fique esperando esse escopo ser liberado.
	* --- Essa chamada pode causar inconsistência ---
	*/
	void restore(unsigned int value, mutex& guard) {
		if (guard.try_lock()) {
			amount += value;
			cout << format("{} restore {} = {}\n", get_id(), value, amount);
			guard.unlock();
		}
		else {
			cout << format("{} says (restore) is locked!!!\n", get_id());
		}
	}
	/*
	* O "SHARED_MUTEX" permite que muitas THREADS possam acessar simultaneamente esse escopo com permissão READY.
	* Apenas um THREAD por vez de modo exclusivo terá acesso WRITE.
	* O acesso de WRITE será bloqueado enquanto houver acesso de READY, e o mesmo será o inverso.
	*/
	void write_count(shared_mutex& guard) {
		for (short x = 0; x < 10; ++x) {
			guard.lock(); // WRITE LOCK
			count++;
			cout << format("{} write loop {} count is {}\n", get_id(), x, count);
			guard.unlock();
			sleep_for(microseconds(100));
		}
	}
	void ready_count(shared_mutex& guard) {
		for (short x = 0; x < 10; ++x) {
			guard.lock_shared(); // READY LOCK
			cout << format("{} ready loop {} count is {}\n", get_id(), x, count);
			guard.unlock_shared();
			sleep_for(microseconds(100));
		}
	}
	/*
	* O "SCOPED_LOCK" utiliza duas chaves para evitar o DEADLOCK.
	* Este metodo é usado em areas criticas de acesso simultaneo, e a chave primaria possui mais relevancia.
	* Esse cenário evita uma espera infinita em que a THREAD-A tome a chave primaria e a THREAD-B a secundaria.
	*/
	void ready(mutex& primaryGuard, mutex& secondaryGuard) {
		std::scoped_lock lock{ primaryGuard, secondaryGuard };

		cout << format("{} ready operation >> amount={}, count={}\n", get_id(), amount, count);
	}
};

static void MutualExclusion() {
	StoreBook store{ 255 };

	cout << format("[start] amount: {}\n", store.get_amount());

	// STEP 01 (LOCK_GUARD) -------------------------------------------
	mutex STORE_MTX{};
	thread task00{ [&]() {
		store.sell(55, STORE_MTX);
		}
	};
	thread task01{ [&]() {
		store.sell(2, STORE_MTX); store.sell(10, STORE_MTX);
		}
	};
	thread task02{ [&]() {
		store.sell(1, STORE_MTX); store.sell(20, STORE_MTX);
		}
	};

	task00.join();  task01.join(); 	task02.join(); 	// Main process await tasks
	cout << format(">>> amount: {}\n", store.get_amount());


	// STEP 02 (TRY_LOCK) ----------------------------------------------
	thread task03{ [&]() {
		for (short x = 1; x < 5; ++x) { store.restore(x, STORE_MTX); }}
	};
	thread task04{ [&]() {
		for (short x = 5; x > 0; --x) { store.restore(x, STORE_MTX); }}
	};

	task03.join(); 	task04.join(); 	// Main process await tasks
	cout << format(">>> amount: {}\n", store.get_amount());


	// STEP 03 (SHARED_MUTEX)
	shared_mutex SHARED_STORE_MTX{};
	thread task05{ [&]() {store.ready_count(SHARED_STORE_MTX); } };
	thread task06{ [&]() {store.write_count(SHARED_STORE_MTX); } };

	task05.join(); 	task06.join(); 	// Main process await tasks
	cout << format("[end] amount: {}\n", store.get_amount());


	// STEP 04 (ATOMIC<INT> VALUE) --------------------------------------
	atomic<int> ATOMIC_VALUE{};
	cout << format("[start]atomic value: {}\n", ATOMIC_VALUE.load());

	thread task07{ [&]() {
		for (auto x = 0; x < 10'000'000; ++x) { ATOMIC_VALUE++; }}
	};
	thread task08{ [&]() {
		for (auto x = 0; x < 10'000'000; ++x) { ATOMIC_VALUE++; }}
	};

	task07.join(); 	task08.join(); 	// Main process await tasks
	cout << format("[end]atomic value: {}\n", ATOMIC_VALUE.load());


	// STEP 05 (SCOPED_LOCK) -------------------------------------------
	mutex SECONDARY_STORE_MTX{};

	auto readyAction = [&store](mutex& guard01, mutex& guard02) {
		for (auto x = 0; x < 3; ++x) { store.ready(guard01, guard02); }
		};

	thread task09{ readyAction, std::ref(STORE_MTX), std::ref(SECONDARY_STORE_MTX) };
	thread task10{ readyAction, std::ref(SECONDARY_STORE_MTX), std::ref(STORE_MTX) };
	task09.join(); 	task10.join(); 	// Main process await tasks
}