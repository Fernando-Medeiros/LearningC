#include "../shared/Print.cpp"
#include <iostream>
#include <vector>

using std::vector;

static void Algorithm08() {
	vector<char> options{ 'a', 'b', 'c', 'd' };
	char input{};


	auto to_upper_case = [](char& c)-> char {
		return  (c >= 'a' && c <= 'z') ? c - ('a' - 'A') : c; };

	auto contains = [&input, &to_upper_case](vector<char>& options)-> bool {
		for (auto& letter : options)
			if (to_upper_case(input) == to_upper_case(letter)) return true;
		return false;
		};

	while (to_upper_case(input) != 'X') {
		Print("Waht to do? (A/B/C/D/X) > ");

		std::cin >> input;

		if (contains(options))
			Print("func {}\n", to_upper_case(input));
		else
			Print("Response to long\n");
	}
}