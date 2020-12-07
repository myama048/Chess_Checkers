nclude "Chess.h"

bool Chess::check_win() {
	for (int i = 0; i < pieces.size(); i++) {
		if (pieces.at(i)->getName() == "K" && pieces.at(i)->returnStatus() == false) {
			return true;
		}
		if (pieces.at(i)->getName() == "k" && pieces.at(i)->returnStatus() == false) {
			return true;
		}
	}
	return false;
}

void Chess::player_turn(int curr_player) {
}

bool Chess::move_piece(int sx, int sy, int dx, int dy) {
	if (sx > 8 || sy > 8 || sx < 0 || sy < 0 || dx > 8 || dy > 8 || dx < 0 || dy < 0)
		return false;

	std::string move_type;
	MoveInterface* mv = nullptr;
	if (sx == dx) {
		move_type = "Side";
		mv = new SideMove();
	}
	else if (sy == dy) {
		move_type = "Straight";
		mv = new StraightMove();
	}
	else if (abs(sx - dx) == abs(sy - dy)) {
		move_type = "Diagonal";
		mv = new DiagonalMove();
	}
	else
		return false;
	if (mv != nullptr) {
		if (pieces.at(board.at(sx).at(sy).second)->setBehavior(mv, move_type)) {
			if (pieces.at(board.at(sx).at(sy).second)->move(board, pieces, sx, sy, dx, dy)) {
				return true;
			}
		}
	}
	return false;
}

Chess::Chess() {
}

void Chess::play_game() {
}

