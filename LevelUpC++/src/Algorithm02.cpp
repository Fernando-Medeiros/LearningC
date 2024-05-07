#include <iostream>
#include <string>

static bool IsFizz(int x) { return (x % 3) == 0; }
static bool IsBuzz(int x) { return (x % 5) == 0; }

// Fizz Buzz
static void Algorithm02() {
	int input;

	std::cout << "Fizz Buzz - Game" << '\n';
	std::cout << "Enter a number (>1): ";
	std::cin >> input;

	for (int x = 1; x <= input; x++)
	{
		std::string result =
			IsFizz(x) && IsBuzz(x) ? "Fizz Buzz" :
			IsFizz(x) ? "Fizz" :
			IsBuzz(x) ? "Buzz" :
			std::to_string(x);

		std::cout << result << '\n';
	}
	std::cout << "-/-/- End -/-/-" << '\n';
}