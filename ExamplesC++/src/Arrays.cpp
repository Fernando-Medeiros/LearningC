#include <array>
#include <vector>

static void Arrays() {
	auto numbers{ std::array<short, 20>{1, 2, 4, 5, 6, 7, 8, 9, 10} };

	auto fruits{ std::vector<const char*>{"apple", "grape", "orange"} };
}