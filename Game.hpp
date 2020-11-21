#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <string>
#include <vector>
#include <iostream>
#include <utility>
#include "Piece"

class Game {
    private:
	std::vector<std::vector<std::pair<int,int>>> board;
	std::string* name;
	std::vector<Piece*> pieces;
	bool* player_status;
	virtual bool check_win() = 0;
	virtual void move_piece(int);
	virtual void player_turn(int) = 0;

    public:
	Game();
	virtual void play_game() = 0;
	virtual void print_board();
};

#endif
