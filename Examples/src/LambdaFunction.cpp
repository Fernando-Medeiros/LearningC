#include <iostream>

static void LambdaFunction() {
	int sum = [](int x, int y) {
		return x + y;
		}(5, 5);


		std::cout << sum << '\n';
}