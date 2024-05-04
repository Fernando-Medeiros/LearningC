#include <iostream>
#include <string>
#include <cstring>

static void Algorithm07() {
	const size_t LENGTH = 50;

	char Array_CPF[LENGTH] = "000.000.000.00 ";
	char Array_Name[] = "Mikey Smith Souza ";
	
	std::string STR_CPF = "000.000.000.25 ";
	std::string STR_Name = "Donald Lee Silva";

	strncat_s(Array_CPF, Array_Name, LENGTH);

	std::cout << Array_CPF << std::endl;
	std::cout << Array_Name << std::endl;
	std::cout << STR_Name + STR_Name << std::endl;
}