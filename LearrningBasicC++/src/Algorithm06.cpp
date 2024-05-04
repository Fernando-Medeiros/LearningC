#include <iostream>

static void Algorithm06() {
	const size_t MAX_LENGTH = 4;

	char Letters[MAX_LENGTH] = {'A', 'B', 'C', 'D'};

	int Days[MAX_LENGTH];

	Days[0] = 11;
	Days[1] = 15;

	std::cout << "Index 0 = " << Days[0] << std::endl;
	std::cout << "Index 1 = " << Days[1] << std::endl;
}