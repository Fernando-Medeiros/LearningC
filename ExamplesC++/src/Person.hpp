#pragma once
#include <string>

class Person {
private:
	std::string Name;
	short Age;
public:
	Person(const std::string& name, short age);
	const std::string& GetName() const;
	const short& GetAge() const;
};