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
	return false;
}

Chess::Chess() {
}

void Chess::play_game() {
}

