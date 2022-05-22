#include <iostream>
#include <string>

enum position { goalkeeper = 'G', midfielder = 'M', striker = 'S', winger = 'W', defender = 'D' };



void enums() {

	int input;

	std::cout << "\nWhat is the players position ";
	std::cout << "\ngoalkeeper = G\nmidfielder = M\nstriker = S\nwinger = W\ndefender = D\n";
	std::cin >> input;

	position place = (position)input;

	switch (place) {

	case 'G':
		std::cout << "This player is a Goalkeeper";

	case 'M':
		std::cout << "This player is a Midfielder";

	case 'S':
		std::cout << "This player is a Striker";


	case 'W':
		std::cout << "This player is a Winger";

	case 'D':
		std::cout << "This player is a Defender";

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
	enums();



	std::cout << "\n-------------\n";
	// Create another car structure and store it in myCar2;
	soccer player2;

	std::cout << "Player 2 number: ";
	std::cin >> player2.playerNumber;
	std::cout << "Player 2 top speed: ";
	std::cin >> player2.topSpeed;
	enums();



	// Print the structure members
	std::cout << "\n-------------\n";
	std::cout << "player 1: Number " << player1.playerNumber << ", Top Speed (mph)" << player1.topSpeed << position() << "\n";
	std::cout << "player 2: Number " << player2.playerNumber << ", Top Speed (mph)" << player2.topSpeed << "\n";

}