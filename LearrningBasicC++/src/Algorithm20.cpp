#include <iostream>

static int square(int x) {
	x = x * x;
	return x;
}

static void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

static void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

static void Algorithm20() {
	int a = 10, b;

	b = square(a);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(&a, &b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
}