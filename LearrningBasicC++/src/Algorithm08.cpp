#include <iostream>
#include <cstdint>

static void Algorithm08(){
	float F1;
	int32_t N1;
	uint32_t N2;

	F1 = -7.66;
	N1 = F1;
	N2 = N1;

	std::cout << "Float " << F1 << std::endl;
	std::cout << "Integer " << N1 << std::endl;
	std::cout << "U Integer " << (int32_t)N2 << std::endl;
}