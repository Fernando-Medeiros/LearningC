#include "../shared/Print.cpp"
#include<atomic>
#include<chrono>
#include<thread>
#include<vector>

using
std::string,
std::vector,
std::thread,
std::atomic_bool,
std::atomic_flag,
std::atomic_uint64_t,
std::chrono::milliseconds,
std::this_thread::sleep_for;

// ATOMIC
static void Algorithm19() {
	const uint64_t MAX_COUNT{ 1'000'000 };
	const unsigned char MAX_THREAD{ 100 };
	atomic_bool AtomicRead{};
	atomic_flag AtomicWinner{}; // FLAG -> NOTIFY ALL
	atomic_uint64_t AtomicCount{}; // ALL THREADS -> INCREMENT


	auto action = [&](int id) {
		while (AtomicRead == false) std::this_thread::yield(); // YIELD NEXT THREAD

		for (auto i = 0; i < MAX_COUNT; ++i) {
			if (AtomicWinner.test()) {
				return;
			}
			++AtomicCount;
		}
		if (AtomicWinner.test_and_set() == false) {
			Print("thread {:02} won!\n", id);
			AtomicWinner.notify_all();
		}
		};

	vector<thread> threads{};

	for (auto i = 0; i < MAX_THREAD; ++i) {
		threads.emplace_back(action, i);
	}

	sleep_for(milliseconds(25));
	Print("Go!\n");
	AtomicRead = true;

	for (auto& thread : threads) thread.join();

	Print("global count: {}\n", AtomicCount.load());
}