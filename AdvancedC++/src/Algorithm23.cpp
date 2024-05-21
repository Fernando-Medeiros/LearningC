#include <chrono>
#include <condition_variable>
#include <mutex>
#include <thread>

using
std::thread,
std::mutex,
std::unique_lock,
std::condition_variable,
std::chrono::milliseconds,
std::this_thread::sleep_for;

class Semaphore {
private:
	unsigned long count;
	mutex semaphoreMutex;
	condition_variable signal;
public:
	Semaphore(unsigned long init_count) {
		count = init_count;
	}

	void acquire() {
		unique_lock<mutex> guard(semaphoreMutex);

		while (count <= 0) { signal.wait(guard); }
		count--;
	}

	void release() {
		unique_lock<mutex> guard(semaphoreMutex);

		count++;
		guard.unlock();
		signal.notify_one();
	}
};

static void cell_phone(int id, Semaphore& semaphore) {
	semaphore.acquire();

	printf("Phone %d is charging...\n", id);

	sleep_for(milliseconds(2));

	printf("Phone %d is DONE charging!\n", id);

	semaphore.release();
}

// SEMAPHORE (EXAMPLE) > CLASS IMPLEMENTATION
static void Algorithm23() {
	thread phones[10];
	auto semaphore{ Semaphore(5) };

	for (int idx = 0; idx < 10; idx++) {
		phones[idx] = thread(cell_phone, idx, std::ref(semaphore));
	}
	for (auto& phone : phones) {
		phone.join();
	}
}