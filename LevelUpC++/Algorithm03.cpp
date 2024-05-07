#include <iostream>
#include <vector>

static void ConstSequence(
	const std::vector<int>& array,
	const size_t& length,
	int& index) {
	while (index < length - 1 && array[index] == array[index + 1]) {
		index++;
	}
}

static void AscSequence(
	const std::vector<int>& array,
	const size_t& length,
	int& index) {
	if (array[index] < array[index + 1]) {
		while (index < length - 1 && array[index] <= array[index + 1]) {
			index++;
		}
	}
	else {
		while (index < length - 1 && array[index] >= array[index + 1]) {
			index++;
		}
	}
}

static void DescSequence(
	const std::vector<int>& array,
	const size_t& length,
	int& index) {
	if (array[index] > array[index + 1]) {
		while (index < length - 1 && array[index] >= array[index + 1]) {
			index++;
		}
	}
}


static bool IsBitonic(const std::vector<int>& array) {
	int index = 0;
	const size_t length = array.size();

	if (length < 2) return true;

	ConstSequence(array, length, index);
	if (index == length - 1) return true;

	AscSequence(array, length, index);
	if (index == length - 1) return true;

	DescSequence(array, length, index);

	return index == length - 1;
}


static void Algorithm03() {
	std::vector<int> vector{ 1, 2, 5, 4, 3 };

	std::cout << IsBitonic(vector) << '\n';
}