#include <iostream>

// Course resolution - 81 loops
static void sorted_array(int* array, size_t length) {
	bool sorted = false;
	int loop = 0;

	while (!sorted) {
		sorted = true;

		for (size_t i = 0; i < length - 1; i++) {

			if (array[i] > array[i + 1]) {
				auto swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				sorted = false;
			}
			loop++;
		}
	}
	std::cout << "loops = " << loop << std::endl;
}

// My resolution - 55 loops
static void Sort(int* array, size_t length) {
	int loop = 0;

	for (size_t i = 0; i < length; i++) {
		auto minor = i;

		for (size_t x = i + 1; x < length; x++) {

			if (array[x] < array[minor])
				minor = x;
			loop++;
		}

		if (minor != i) {
			auto temp = array[i];
			array[i] = array[minor];
			array[minor] = temp;
		}
		loop++;
	}
	std::cout << "loops = " << loop << std::endl;
}

// My resolution - 54 loops
static void SortTwo(int* array, size_t length) {
	for (size_t current = 0; current < length - 1; current++) {

		auto next = current + 1;

		while (next < length) {
			if (array[current] > array[next]) {
				auto swap = array[current];
				array[current] = array[next];
				array[next] = swap;
			}
			next++;
		}
	}
}

static void PrintElements(int const* array, size_t length) {
	for (int i = 0; i < length; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

static void Algorithm01() {
	const size_t len = 10;
	int array[] = { 2, 9, 4, 3, 5, 1, 6, 8, 0, 7 };

	std::cout << "Original Array:\n";
	PrintElements(array, len);

	SortTwo(array, len);

	std::cout << "Sorted Array:\n";
	PrintElements(array, len);
}