#include "Person.hpp"
#include <memory>

static void Pointers() {
	// Better - Smart Pointer
	/*
	auto ptr{ std::make_shared<Person>("Mike", 18) };
	std::shared_ptr<Person> personPtr{new Person("Mike", 25)};
	*/
	std::shared_ptr<Person> personPtr{};

	personPtr = std::make_shared<Person>("Mike", 20);

	// For limited scope
	auto autoPtr = new Person("Mike", 25);
	delete autoPtr;
	autoPtr = nullptr;

	auto personObject = Person("Sophia", 18);
	Person* ptr;
	ptr = &personObject;
	delete ptr;
	ptr = nullptr;
}