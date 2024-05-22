#include <iostream>

static void Algorithm16() {
	float number, numberOne, numberTwo, result;
	char letter, operation;
	bool isMonday;

	letter = 'f';
	number = 103.0f;
	isMonday = true;

	if (number < 110) {
		std::cout << "number < 110" << std::endl;
	}
	if (letter == 'f') {
		std::cout << "letter is f" << std::endl;
	}
	if (isMonday) {
		std::cout << "is Monday" << std::endl;
	}

	std::cout << "enter number one: " << std::endl;
	std::cin >> numberOne;
	std::cout << "enter number two: " << std::endl;
	std::cin >> numberTwo;
	std::cout << "select ( + - * / % ): " << std::endl;
	std::cin >> operation;

	switch (operation)
	{
	case '+':
		result = numberOne + numberTwo; break;
	case '-':
		result = numberOne - numberTwo; break;
	case '*':
		result = numberOne * numberTwo; break;
	case '/':
		result = numberOne / numberTwo; break;
	case '%':
		result = (int)numberOne % (int)numberTwo; break;
	default:
		result = 0; break;
	}
	std::cout << "result is " << result << std::endl;
}
