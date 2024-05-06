#include <fstream>
#include <iostream>
#include <string>

static void Algorithm22() {
	std::ofstream file;
	float a = 4.3f, b = 5.3f;

	file.open("raw/calculations.txt");

	if (file.fail())
		std::cout << "File not foud" << std::endl;
	else {
		file << "a = " << a << std::endl;
		file << "b = " << b << std::endl;
		file << "a + b = " << (a + b) << std::endl;
		file << "a * b = " << (a * b) << std::endl;
		file.close();
	}
}