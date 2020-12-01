#include "Game.hpp"
Game::Game() {}
void Game::print_board() {
	// loop through outer vector
	for(int i = 0; i < 8; i++) {
		// loop through inner vector 
		for (int j = 0; j < 8; j++) {
			if (board.at(i).at(j).first)
				std::cout << pieces.at(board.at(i).at(j).second)->getName() << " ";
			else
				std::cout << "~" << " ";
		}
		std::cout << std::endl;
	}
}


