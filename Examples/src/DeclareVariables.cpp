#include <string>
#include <vector>

static void DeclareVariables() {
	int x{ 0 };
	float y{ 0.5f };
	char letter{ 'M' };
	char grade[]{ 'A', 'B', 'C' };
	std::string name{ "Mike" };
	std::string lastName{ };
	std::vector<int> array{ 1, 2, 3, 4, 5 };
	std::initializer_list<int> list{ 6, 7, 8, 9, 10 };
}