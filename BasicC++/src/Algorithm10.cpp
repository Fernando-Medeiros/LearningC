#include <iostream>

static void Algorithm10() {
	const size_t ARRAY_MAX_LENGTH = 5;

	int Array[ARRAY_MAX_LENGTH];

	std::cout << "Primeiro numero: " << std::endl;
	std::cin >> Array[0];
	std::cout << "Segundo numero: " << std::endl;
	std::cin >> Array[1];
	std::cout << "Terceiro numero: " << std::endl;
	std::cin >> Array[2];
	std::cout << "Quarto numero: " << std::endl;
	std::cin >> Array[3];
	std::cout << "Quinto numero: " << std::endl;
	std::cin >> Array[4];

	float Average = (float)(Array[0] + Array[1] + Array[2] + Array[3] + Array[4]) / (float)ARRAY_MAX_LENGTH;

	std::cout << "Average = " << Average << std::endl;
}