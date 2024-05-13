#include "../shared/Print.cpp"
#include<chrono>
#include<future>
#include<thread>
#include<vector>

using
std::async,
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

// THREAD - FUTURE ASYNC
static void Algorithm16() {
	unsigned char MaxQuery{ 255 };
	vector<future<Query>> queries{};

	auto threadAction = [](const unsigned char loop) -> Query {
		Query query{};
		auto start = steady_clock::now();

		for (auto c = 0; c < 100000000; ++c) {
			query.count++;
		}

		query.duration = steady_clock::now() - start;

		Print("thread{} - count:{} in {:.3}\n", loop, query.count, query.duration);
		return query;
		};

	for (auto loop = 0; loop < MaxQuery; ++loop) {
		queries.emplace_back(async(threadAction, loop + 1));
	}
}