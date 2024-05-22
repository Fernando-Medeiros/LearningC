#include <chrono>
#include <iostream>

using
std::cout,
std::chrono::duration,
std::chrono::steady_clock;

template<typename T>
concept Callable = requires(T action) { action(); };

static void wrapper(const Callable auto& action) {
	auto start = steady_clock::now();
	action();
	auto end = steady_clock::now();
	cout << "duration: " << duration<double>{end - start} << "\n";
}

class Mail {
public:
	void Send() { cout << "action" << "\n"; };
};

static void function() { cout << "action" << "\n"; };

static void CallableConcept() {
	auto mail{ Mail() };

	::wrapper(function);
	::wrapper([&mail]() {mail.Send(); });
	::wrapper([]() {cout << "action" << "\n"; });
}