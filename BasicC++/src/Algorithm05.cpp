#include <iostream>
#include <string>
#include <cstdint>

#define AMOUNT  5000;
#define DEBUG true;

void static Algorithm05() {
	int32_t Maior = AMOUNT;
	uint8_t Menor = 37;

#ifdef DEBUG
	std::cout << "Hello World!" << std::endl;
#endif

	Maior += Menor;
	std::cout << "O maior numero inteiro e " << Maior << std::endl;
}