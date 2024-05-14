#include <atomic>
#include <chrono>
#include <format>
#include <iostream>
#include <memory>
#include <mutex>
#include <thread>

using
std::cout,
std::mutex,
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
public:
	StoreBook(unsigned int value) : amount(value) {}

	unsigned int get_amount()const {
		return amount;
	}

	void sell(unsigned int value, mutex& guard) {
		lock_guard<mutex> lock{ guard };
		amount -= value;
		cout << format("{} sell {} = {}\n", get_id(), value, amount);
	}

	void restore(unsigned int value, mutex& guard) {
		guard.lock();
		amount += value;
		cout << format("{} restore {} = {}\n", get_id(), value, amount);
		guard.unlock();
	}

	void count(mutex& guard) {
		for (short x = 0; x < 10; ++x) {
			guard.lock();
			cout << format("{} loop {}\n", get_id(), x);
			guard.unlock();
			sleep_for(microseconds(500));
		}
	}
};

static void MutualExclusion() {
	mutex storeMtx{};
	StoreBook store{ 255 };
	atomic<int> atomicValue{};

	cout << format("[start] amount: {}\n", store.get_amount());

	thread task01{ [&]() {
		store.sell(2, storeMtx); store.sell(10, storeMtx);
		store.sell(3, storeMtx); store.sell(5, storeMtx);
		}
	};
	thread task02{ [&]() {
		store.sell(1, storeMtx); store.sell(20, storeMtx);
		store.sell(2, storeMtx); store.sell(8, storeMtx);
		}
	};

	task01.join(); 	task02.join(); 	// Step -> Main process await tasks
	cout << format(">>> amount: {}\n", store.get_amount());


	thread task03{ [&]() {
		for (short x = 1; x < 5; ++x) { store.restore(x, storeMtx); }}
	};
	thread task04{ [&]() {
		for (short x = 1; x < 5; ++x) { store.restore(x, storeMtx); }}
	};

	task03.join(); 	task04.join(); 	// Step -> Main process await tasks
	cout << format(">>> amount: {}\n", store.get_amount());


	thread task05{ [&]() {store.count(storeMtx); } };
	thread task06{ [&]() {store.count(storeMtx); } };

	task05.join(); 	task06.join(); 	// Step -> Main process await tasks
	cout << format("[end] amount: {}\n", store.get_amount());


	cout << format("[start]atomic value: {}\n", atomicValue.load());

	thread task07{ [&]() {
		for (auto x = 0; x < 10'000'000; ++x) { atomicValue++; }}
	};
	thread task08{ [&]() {
		for (auto x = 0; x < 10'000'000; ++x) { atomicValue++; }}
	};

	task07.join(); 	task08.join(); 	// Step -> Main process await tasks
	cout << format("[end]atomic value: {}\n", atomicValue.load());
}