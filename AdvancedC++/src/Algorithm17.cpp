#include "../shared/Print.cpp"
#include<chrono>
#include<future>
#include<thread>
#include<vector>

using
std::thread,
std::promise,
std::future,
std::vector,
std::chrono::seconds,
std::chrono::duration,
std::chrono::steady_clock,
std::this_thread::sleep_for;

struct Query {
public:
	duration<double> duration{};
	unsigned int count{};
};

// THREAD - FUTURE PROMISE
static void Algorithm17() {
	unsigned char MaxQuery{ 255 };
	vector<future<Query>> queries{};

	auto threadAction = [](promise<Query> promiseValue) -> void {
		Query query{};
		auto start = steady_clock::now();

		for (auto c = 0; c < 100000000; ++c) { query.count++; }

		query.duration = steady_clock::now() - start;

		promiseValue.set_value(query);
		};

	auto startMain = steady_clock::now();

	for (auto loop = 0; loop < MaxQuery; ++loop) {
		promise<Query> _promise{};
		queries.emplace_back(std::move(_promise.get_future()));
		thread scopedThread{ threadAction, std::move(_promise) };
		scopedThread.detach();
	}

	for (auto& query : queries) {
		static auto loop{ 0 };
		auto [duration, count] = query.get();
		Print("thread{} - count:{} in {:.3}\n", ++loop, count, duration);
	}

	duration<double> end = steady_clock::now() - startMain;
	Print("Total duration: {:.3}\n", end);
}