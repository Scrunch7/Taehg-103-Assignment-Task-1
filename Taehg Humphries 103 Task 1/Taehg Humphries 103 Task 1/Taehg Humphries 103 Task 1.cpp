#include <iostream>
#include <string>

enum position { g = 'G', m = 'M', s = 'S', w = 'W', d = 'D' };


// Declare a structure named "soccer"
struct soccer {
	int playerNumber;
	float topSpeed;
	std::string pos = "none";
};

int main() {


	int input;
	soccer player1;
	soccer player2;
	

	for (int i = 0; i < 2; i++){
		if (i == 0) {
			std::cout << "Player 1 number: ";
			std::cin >> player1.playerNumber;
			std::cout << "Player 1 top speed: ";
			std::cin >> player1.topSpeed;

			std::cout << "\nWhat is the players position ";
			std::cout << "\ngoalkeeper = G\nmidfielder = M\nstriker = S\nwinger = W\ndefender = D\n";
			char input;
			std::cin >> input;

			input = toupper(input);
			position place = static_cast<position>(input);

			switch (place) {

			case 'G':
				std::cout << "This player is a Goalkeeper";
				player1.pos = "Goalkeeper";
				break;

			case 'M':
				std::cout << "This player is a Midfielder";
				player1.pos = "Midfielder";
				break;

			case 'S':
				std::cout << "This player is a Striker";
				player1.pos = "Striker";
				break;

			case 'W':
				std::cout << "This player is a Winger";
				player1.pos = "Winger";
				break;

			case 'D':
				std::cout << "This player is a Defender";
				player1.pos = "Defender";
				break;

			default:
				break;
			}
		}
		else {
			std::cout << "\n-------------\n";
			// Create another car structure and store it in myCar2;
			std::cout << "Player 2 number: ";
			std::cin >> player2.playerNumber;
			std::cout << "Player 2 top speed: ";
			std::cin >> player2.topSpeed;

			std::cout << "\nWhat is the players position ";
			std::cout << "\ngoalkeeper = G\nmidfielder = M\nstriker = S\nwinger = W\ndefender = D\n";
			char input;
			std::cin >> input;

			input = toupper(input);
			position place = static_cast<position>(input);

			switch (place) {

			case 'G':
				std::cout << "This player is a Goalkeeper";
				player2.pos = "Goalkeeper";
				break;

			case 'M':
				std::cout << "This player is a Midfielder";
				player2.pos = "Midfielder";
				break;

			case 'S':
				std::cout << "This player is a Striker";
				player2.pos = "Striker";
				break;

			case 'W':
				std::cout << "This player is a Winger";
				player2.pos = "Winger";
				break;

			case 'D':
				std::cout << "This player is a Defender";
				player2.pos = "Defender";
				break;

			default:
				break;
			}
		}
	}

	// Print the structure members
	std::cout << "\n-------------\n";
	std::cout << "player 1: Number " << player1.playerNumber << "\n";
	std::cout << "Top Speed (mph)  " << player1.topSpeed << "\n";
	std::cout << "Player position  " << player1.pos << "\n\n";
	std::cout << "player 2: Number " << player2.playerNumber << "\n";
	std::cout << "Top Speed (mph)  " << player2.topSpeed << "\n";
	std::cout << "Player position  " << player2.pos << "\n\n";

}
