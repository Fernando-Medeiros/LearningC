#include <iostream>
#include <vector>

static void Algorithm18() {
	auto values = std::vector<int>{ 1, 2, 3, 4 };
	float avg = 0.0f;

	for (int x = 0; x < values.size(); x++)
		avg += values.at(x);

	avg /= values.size();
	std::cout << "Avg " << avg << std::endl;

	avg = 0.0f;

	for(int x : values)
		avg += x;

	avg /= values.size();
	std::cout << "Avg " << avg << std::endl;
}