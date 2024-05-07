#include <iostream>
#include <unordered_map>

static void UnorderedMap() {
	auto levels =
		std::unordered_map<const char*, uint32_t>{
			{"level Map", 39},
			{"Hard Boss", 119},
			{"Very Easy", 42},
			{"Final", 5000}
	};

	for (auto& item : levels) {
		std::cout << item.first << " -> " << item.second << '\n';
	}
}