#include "../shared/Print.cpp"
#include "Algorithm00Position.h"
#include <iostream>


static void Algorithm00() {
	std::shared_ptr<Position> playerPosition{ };
	std::shared_ptr<Position> objectPosition{ };
	playerPosition = std::make_unique<Position>(5, 3);
	objectPosition = std::make_unique<Position>(20, 27);

	Print("Player Position {}\n", playerPosition->ToString());
	Print("Object Position {}\n", objectPosition->ToString());

	Print("Is Collision? {}\n", *playerPosition == *objectPosition);

	*playerPosition = *playerPosition + *objectPosition;
	Print("Player {}\n", playerPosition->ToString());

	*playerPosition = *playerPosition - *objectPosition;
	Print("Player {}\n", playerPosition->ToString());

	*playerPosition = *playerPosition * *objectPosition;
	Print("Player {}\n", playerPosition->ToString());

	*playerPosition / *objectPosition;
	Print("Player {}\n", playerPosition->ToString());

	playerPosition->Vertical(50);
	playerPosition->Horizontal(15);

	Print("Player Vertical Position   Y={}\n", playerPosition->Vertical());
	Print("Player Horizontal Position X={}\n", playerPosition->Horizontal());

	*playerPosition = *objectPosition;
	Print("Player Position {}\n", playerPosition->ToString());
	Print("Object Position {}\n", objectPosition->ToString());

	Print("Is Collision? {}\n", *playerPosition == *objectPosition);
}