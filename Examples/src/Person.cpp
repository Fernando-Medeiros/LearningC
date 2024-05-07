#include "Person.hpp"

Person::Person(
	const std::string& name,
	short age
) : Name(name), Age(age) {};

const std::string& Person::GetName() const {
	return Name;
}

const short& Person::GetAge() const {
	return Age;
}