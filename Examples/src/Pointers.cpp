#include "Person.hpp"
#include <memory>

static void Pointers() {
	// V
	auto autoPtr{ std::make_shared<Person>() };

	std::shared_ptr<Person> personPtr{ std::make_shared<Person>() };


	// X
	auto ps = new Person("Mike", 25);
	delete ps;
}