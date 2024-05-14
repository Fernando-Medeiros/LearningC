#include <format>
#include <iostream>
#include <print> // C++23 or later
#include <string_view>

using
std::cout,
std::format,
std::string_view;

// format-style print()
constexpr void MyPrint(const string_view str_format, auto&&... args) {
	fputs(std::vformat(
		str_format,
		std::make_format_args(args...)).c_str(),
		stdout);
}

// Format - String
static void Format() {
	auto year{ 2024 };
	auto phi{ 3.14159 };
	auto txt{ "World" };
	auto text{ string_view("Hello") };

	//printf("%s\n", text); // extern C (unicode bug)
	printf("%s %i %.3f\n", txt, year, phi); // extern C

	//The contents of <format> are available only with C++20 or later.
	cout << format("{} {}\n", text, year); // extern C
	cout << format("{1} {0}\n", text, year); // extern C
	MyPrint("π is {}\n", phi);
	MyPrint("π is {:.5}\n", phi);
	MyPrint("year is {1:}, π is {0:.5}\n", phi, year);
	MyPrint("year is [{:*<10}]\n", year);
	MyPrint("year is [{:0>10}]\n", year);
	MyPrint("year is [{:^10}]\n", year);
	MyPrint("year is [{:_^10}]\n", year);
	MyPrint("{:>8}: [{:04X}]\n", "Hex", year);
	MyPrint("{:>8}: [{:4o}]\n", "Octal", year);
	MyPrint("{:>8}: [{:4d}]\n", "Decimal", year);

	// "The contents of <print> are available only with C++23 or later."
	std::print("π is {}\n", phi);
	std::print("π is {:.5}\n", phi);
	std::print("year is {1:}, π is {0:.5}\n", phi, year);
	std::print("year is [{:*<10}]\n", year);
	std::print("year is [{:0>10}]\n", year);
	std::print("year is [{:^10}]\n", year);
	std::print("year is [{:_^10}]\n", year);
	std::print("{:>8}: [{:04X}]\n", "Hex", year);
	std::print("{:>8}: [{:4o}]\n", "Octal", year);
	std::print("{:>8}: [{:4d}]\n", "Decimal", year);
}