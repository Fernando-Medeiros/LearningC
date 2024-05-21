#include <cstdio>
#include <future>

using
std::async,
std::launch;

static unsigned long long recursive_sum(
	unsigned int lower,
	unsigned int high,
	unsigned int depth = 0) {
	if (depth > 3) {							// base case
		unsigned long long sum = 0;

		for (auto l = lower; l < high; l++) {
			sum += l;
		}
		return sum;
	}
	else {										// divide and conquer
		auto mid = (high + lower) / 2;			// middle index for splitting

		auto left = std::async(std::launch::async, recursive_sum, lower, mid, depth + 1);

		auto right = recursive_sum(mid, high, depth + 1);

		return left.get() + right;
	}
}

// FUTURE - ASYNC RECURSIVE TASK -> DIVIDE AND CONQUER
static void Algorithm26() {
	auto total = recursive_sum(0, 1000000000);

	printf("Total: %lld\n", total);
}