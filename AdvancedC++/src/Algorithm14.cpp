#include "../shared/Print.cpp"
#include<chrono>
#include<thread>

using
std::thread,
std::chrono::milliseconds,
std::this_thread::sleep_for;

// THREADS
static void Algorithm14() {
	auto action = [](const unsigned short n) {
		Print("Start t{}\n", n);
		auto duration = 100 * n;

		for (auto i = 0; i < 5; ++i) {
			sleep_for(milliseconds(duration));
			Print("t{} ({}ms): loop {}\n", n, duration, (i + 1));
		}
		Print("End t{}\n", n);
		};

	thread t1{ action , 1 };
	thread t2{ action , 2 };
	thread t3{ action , 3 };
	t1.detach();
	t2.detach();
	t3.detach();

	Print("Main Sleep for 3 seconds\n");
	sleep_for(milliseconds(3000)); // Keeps the main process alive for 3 seconds
	Print("End Main\n");
}