#include "../shared/Print.cpp"
#include<chrono>
#include<thread>

using
std::chrono::duration,
std::chrono::steady_clock,
std::this_thread::sleep_for,
std::this_thread::sleep_until;

using namespace std::chrono_literals;

// THREAD ANT TIME
static void Algorithm13() {
	auto startTime = steady_clock::now();

	Print("sleep for 2.5 seconds\n");
	sleep_for(2s + 500ms);

	Print("sleep for 3 seconds\n");
	sleep_until(steady_clock::now() + 3s);

	duration<double> endTime = steady_clock::now() - startTime;
	Print("total duration: {:.5}\n", endTime);
};
