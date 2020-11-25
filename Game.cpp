#include "Game.hpp"
Game::Game() {}
void Game::print_board() {
	// loop through outer vector
	for(int i = 0; i < 8; i++) {
		// loop through inner vector 
		for (int j = 0; j < 8; j++) {
			// assign letter to a particular space
			unsigned char tmp;
			switch (board.at(i).at(j).second) {
				case 0:
					tmp = '~';
					break;
				case 1:
					tmp = 'P';
					break;
				case 2:
					tmp = 'R';
					break;
				case 3:
					tmp = 'N';
					break;
				case 4:
					tmp = 'B';
					break;
				case 5:
					tmp = 'Q';
					break;
				case 6:
					tmp = 'K';
					break;
				default:
					tmp = '~';
					break;

			}
			std::cout << tmp << " ";
		}
		std::cout << std::endl;
	}
}


