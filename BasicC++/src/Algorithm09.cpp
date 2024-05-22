#include <iostream>

enum class EDateOption { Hours, Minutes, Seconds };

static void Algorithm09() {
	EDateOption Format = EDateOption::Minutes;

	std::cout << (int)Format << std::endl;
}