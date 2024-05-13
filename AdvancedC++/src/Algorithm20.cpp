#include "../shared/Print.cpp"
#include <chrono>
#include <deque>
#include <format>
#include <mutex>
#include <thread>

using
std::mutex,
std::deque,
std::thread,
std::lock_guard,
std::atomic_flag,
std::chrono::milliseconds,
std::this_thread::sleep_for;

// PRODUCER-CONSUMER
static void Algorithm20() {
	deque<size_t> queue{};
	mutex producerMutex{};
	mutex consumerMutex{};
	atomic_flag IsFinished{};


	auto producerAction = [&]() {
		for (size_t i{}; i < 10; ++i) {
			sleep_for(milliseconds(250));

			Print("push {} on the queue\n", i);

			lock_guard<mutex> l{ producerMutex };

			queue.push_back(i);
		}
		lock_guard<mutex> l{ producerMutex };
		IsFinished.test_and_set();
		};

	auto consumerAction = [&]() {
		while (IsFinished.test() == false) {
			lock_guard<mutex> l{ consumerMutex };

			while (queue.empty() == false) {
				Print("pop {} from the queue\n", queue.front());
				queue.pop_front();
			}
		}
		};


	thread task1{ producerAction };
	thread task2{ consumerAction };
	task1.join(); task2.join();
	Print("finished!\n");
}