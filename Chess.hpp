fndef __CHESS_HPP__
#define __CHESS_HPP__

#include "Game.h"

class Chess : public Game {
	private:
		std::vector<std::vector<std::pair<int, int>>> board;
		std::string* player_name;
		std::vector<Piece*> pieces;
		std::vector<bool> player_status;
		bool check_win();
		void player_turn(int);
		bool move_piece(int, int, int, int);
	public:
		Chess();
		void play_game();
};

#endif
