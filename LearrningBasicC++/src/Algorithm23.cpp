#include "Algorithm15Class.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

static void Read(
	std::string fileName,
	std::vector<Student>& handler) {
	std::ifstream file;
	std::string line;

	file.open(fileName);

	if (file.fail())
		std::cout << "File not foud\n";
	else {
		while (!file.eof()) {
			getline(file, line);
			auto id = stoi(line.substr(0, 2));
			auto name = line.substr(3);

			handler.push_back(Student(id, name));
		}

		file.close();
	}
}

static void Write(
	std::string fileName,
	std::vector<Student>& handler) {
	std::ofstream file;

	file.open(fileName);

	if (file.fail())
		std::cout << "File not foud\n";
	else {
		for (Student student : handler) {
			file << student.GetId() << "," << student.GetName() << std::endl;
		}
		file.close();
	}
}

static void Algorithm23() {
	auto handler = std::vector<Student>();

	Read("raw/students.txt", handler);
	Write("raw/students.txt", handler);
}