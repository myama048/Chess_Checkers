#ifndef __MOVE_INTERFACE_HPP__
#define __MOVE_INTERFACE_HPP__



class MoveInterface {
	public:
		int move(vector<vector<pair<int, int>>>, Pieces* p, int sx, int sy, int dx, int dy){
	// check if spot if valid
	int new_idx = 10 * dx + dy;
	if(board->getStatus(new_idx) == 0){
		return 1;
	}
	if(p->user == 0 && board->getStatus(new_idx) == 1){
		return 2;
	}
};


#endif
