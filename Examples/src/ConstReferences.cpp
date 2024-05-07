#include <string>
#include <vector>

void print(const short& value) { return; }

void print(const std::string& str) { return; }

void print(const std::vector<short>& array) { return; }

static void ConstReference() {
	auto age{ (short)25 };
	auto name{ std::string {"Mike"} };
	auto array{ std::vector<short>{1, 2, 3, 4, 5} };

	print(age);
	print(name);
	print(array);
}