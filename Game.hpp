#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <string>
#include <vector>
#include <iostream>
#include <utility>
#include "Piece.hpp"

//class Piece;

class Game {
    protected:
	std::vector<std::vector<std::pair<int,int>>> board;
	std::vector<std::string> player_name;
	std::vector<Piece*> pieces;
	std::vector<bool> player_status;

    public:
	Game();
	virtual ~Game(){
		board.clear();
		player_name.clear();
		player_status.clear();
		pieces.clear();
	}
	virtual void play_game() = 0;
	void print_board();
};

#endif
