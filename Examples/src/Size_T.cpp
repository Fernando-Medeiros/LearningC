#include <vector>

static void Size_T() {
	size_t length{ 40 };
	std::vector<int> array{ 1,2,3,4,5,6 };

	for (size_t i = 0; i < array.size(); i++)
	{
		if (length > array.size()) return;
	}

}