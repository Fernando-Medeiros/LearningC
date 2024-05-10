#include "../shared/Print.cpp"
#include "Algorithm04Container.cpp"
#include <iostream>

static void Algorithm04() {
	auto positions = Collection<unsigned short>({ 10, 15, 25, 35, 50 }); // initializer_list ctor
	Print("P> First {}\n", positions.First());
	Print("P> Last {}\n", positions.Last());
	Print("Positions > {}\n", positions.ToString());


	auto fruits = Collection<string>(); // default ctor
	fruits.Append("grape");
	fruits.Append("orange");
	fruits.Append("apple");
	Print("F> First {}\n", fruits.First());
	Print("F> Last {}\n", fruits.Last());
	Print("Fruits > {}\n", fruits.ToString());


	auto copyFruits = Collection(fruits); // copy ctor
	Print("copy fruits > {}\n", copyFruits.ToString());

	Collection<unsigned short> copyPositions = positions; // copy operator
	Print("copy positions > {}\n", copyPositions.ToString());


	auto newPositions = Collection(move(positions)); // move ctor
	Print("old positions > {}\n", positions.ToString());
	Print("new positions > {}\n", newPositions.ToString());

	Collection<string> newFruits = move(fruits); // move operator
	Print("old fruits > {}\n", fruits.ToString());
	Print("new fruits > {}\n", newFruits.ToString());
}