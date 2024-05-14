#include <chrono>
#include <iostream>

using
std::cout,
std::chrono::duration,
std::chrono::system_clock,
std::chrono::minutes,
std::chrono::seconds,
std::chrono::microseconds;

static void Chrono() {
	auto tm{ system_clock::now() };
	auto mn{ duration(minutes(30)) };
	auto sc{ duration(seconds(5)) };
	auto ms{ duration(microseconds(500)) };
	cout << "tm :" << tm << "\n";
	cout << "mn :" << mn << "\n";
	cout << "ss : " << sc << "\n";
	cout << "ms : " << ms << "\n";
}