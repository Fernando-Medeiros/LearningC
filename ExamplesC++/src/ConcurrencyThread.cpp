#include<format>
#include<thread>
#include <memory>
#include<iostream>

using
std::cout,
std::thread,
std::format,
std::make_shared,
std::this_thread::get_id;

static void ConcurrencyThread() {
	auto applesPtr{ make_shared<int>(500) };
	auto orangesPtr{ make_shared<int>(500) };

	cout << "start apples: " << *applesPtr << "\n";
	cout << "start oranges: " << *orangesPtr << "\n";

	thread task01{ [&]() {
		while (*applesPtr > 0) { cout << format("{} - {}\n", get_id(), (*applesPtr += -3)); }} };

	thread task02{ [&]() {
		while (*orangesPtr > 0) { cout << format("{} - {}\n", get_id(), (*orangesPtr += -6)); }} };

	// Concurrency -> Main process await tasks
	task01.join(); 	task02.join();

	cout << "end apples: " << *applesPtr << "\n";
	cout << "end oranges: " << *orangesPtr << "\n";
}