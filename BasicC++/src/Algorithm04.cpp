#include <iostream>
#include <typeinfo>

void static Algorithm04() {
	// Dynamic Types
	auto integer = 8;
	auto LongLong = 12345678901;
	auto Float = 3.14f;
	auto Double = 3.14;
	auto Boolean = true;
	auto Char = 'f';
	auto String = "Hello World!";

	std::cout << "Type of " << String << " is " << typeid(String).name() << std::endl;
}