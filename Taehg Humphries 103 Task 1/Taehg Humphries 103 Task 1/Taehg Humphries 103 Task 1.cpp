#include <iostream>
#include <string>

enum compass { North = 1, East, South, West };


void enums()
{

	int input;

	std::cout << "North = 1\nEast  = 2\nSouth = 3\nWest  = 4\n";
	std::cout << "what direction do you want to face? ";
	std::cin >> input;

	compass direction = (compass)input;


	switch (direction) {

	case compass::North:
		std::cout << "you are currently facing North.";
		break;

	case compass::East:
		std::cout << "in order to face East turn 90 degrees to the right.";
		break;

	case compass::South:
		std::cout << "in order to face South, turn 180 degrees in any direction.";
		break;

	case compass::West:
		std::cout << "in order to face West turn 90 degrees to the left.";
		break;

	default:
		break;
	}

}

// Declare a structure named "car"
struct soccer {
	int playerNumber;
	float topSpeed;
};

int main() {
	// Create a car structure and store it in myCar1;
	soccer player1;

	std::cout << "Player 1 number: ";
	std::cin >> player1.playerNumber;
	std::cout << "Player 1 top speed: ";
	std::cin >> player1.topSpeed;


	std::cout << "\n-------------\n";
	// Create another car structure and store it in myCar2;
	soccer player2;
	std::cout << "Player 2 number: ";
	std::cin >> player2.playerNumber;
	std::cout << "Player 2 top speed: ";
	std::cin >> player2.topSpeed;

	// Print the structure members
	std::cout << player1.playerNumber << " " << player1.topSpeed << "\n";
	std::cout << player2.playerNumber << " " << player2.topSpeed << "\n";

	return 0;
}