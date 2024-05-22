#include <fstream>
#include <iostream>
#include <string>

static void Algorithm21() {
	std::ifstream file;
	std::string str;
	int number;
	char letter;

	file.open("raw/people.txt");

	if (file.fail())
		std::cout << "File not foud" << std::endl;
	else {
		while (!file.eof()) {
			getline(file, str);
			std::cout << str << ", ";

			getline(file, str);
			number = stoi(str);
			std::cout << number << ", ";

			getline(file, str);
			letter = str[0];
			std::cout << letter << std::endl;
		}
		file.close();
	}
}