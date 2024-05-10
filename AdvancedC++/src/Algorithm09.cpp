#include "Algorithm05.cpp"
#include <concepts>
#include <type_traits>


template<typename T>
concept DateOnly = requires (T x) {
	std::is_base_of<Day, T>::value;
	std::is_base_of<Month, T>::value;
	std::is_base_of<Year, T>::value;
};

auto GetValue(const DateOnly auto& arg) { return std::to_string(arg.Get()); }


template<typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

template<typename T>
	requires  std::integral<T> || std::floating_point<T>
T V1(const T & arg) { return arg + 5; }

template<typename T>
	requires Numeric<T>
T V2(const T& arg) { return arg + 10; }

template<Numeric T>
T V3(const T& arg) { return arg + 15; }

auto V4(const Numeric auto& arg) { return arg + 20; }

// CONCEPTS and CONSTRAINTS
static void Algorithm09() {
	auto n = 5;
	Print("V1 is {}\n", V1(n));
	Print("V2 is {}\n", V2(n));
	Print("V3 is {}\n", V3(n));
	Print("V4 is {}\n", V4(n));

	Print("Day is {}\n", GetValue(Day(10)));
	Print("Month is {}\n", GetValue(Month(05)));
	Print("Year is {}\n", GetValue(Year(2024)));
}