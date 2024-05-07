#include <iostream>

static int Factorial(int n) {
	int fact;
	fact = n == 0 ? 1 : n * Factorial(n - 1);
	std::cout << fact << ", ";
	return fact;
}

static void Algorithm04() {
	Factorial(4);
}