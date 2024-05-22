#include <iostream>

static void Algorithm12() {
	int number = 34;
	int* ptr;
	ptr = &number;

	std::cout << "Number is " << number << std::endl;
	std::cout << "Ptr is " << *ptr << std::endl;
	std::cout << "Ptr address to " << ptr << std::endl;
	std::cout << "Address of number is " << &number << std::endl;
	std::cout << "Address of ptr is " << &ptr << std::endl;
}