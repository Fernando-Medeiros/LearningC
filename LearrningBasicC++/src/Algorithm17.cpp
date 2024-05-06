#include <iostream>
#include <vector>

static void Algorithm17() {
	auto numbers = std::vector<int>{ 1, 2, 3, 5, 8, 13 };
	auto ptr = numbers.begin();
	int cnt = 0;

	// Count
	std::cout << "While using cnt" << std::endl;
	while (cnt < numbers.size()) {
		std::cout << " " << numbers.at(cnt);
		++cnt;
	}

	std::cout << "\nDo While using cnt" << std::endl;
	do
	{
		--cnt;
		std::cout << " " << numbers.at(cnt);
	} while (cnt > 0);

	// Ptr + Next / Previus
	std::cout << "\nWhile using ptr" << std::endl;
	while (ptr != numbers.end()) {
		std::cout << " " << *ptr;
		ptr = next(ptr, 1);
	}

	std::cout << "\nDo While using ptr" << std::endl;
	do
	{
		ptr = prev(ptr, 1);
		std::cout << " " << *ptr;
	} while (ptr != numbers.begin());
}