#ifndef __STRAIGHT_MOVE_HPP__
#define __STRAIGHT_MOVE_HPP__

#include "MoveInterface.hpp"

class MoveInterface;

class StraightMove : public MoveInterface {
	public:
		bool move(vector<vector<pair<int posiStatus, int idxPieceVector>>>, vector<Pieces*> v_p, int sx, int sy, int dx, int dy){
			//int user = v_p[idxPieceVector]->get_user(); // need to get user
			if(sx != dx) //column should be the same
				return false;
			if(sy == dy) // move is not done
				return false;
			for(int i = sy + 1; i < dy - 1; i++){ // loop to check all spots in between sy & (dy - 1) are open
				if(Board[sx][i].first != 1) // 1 means the board is empty
					return false;
			}	
			
			if(Board[sx][dy] == 2){ // 2 means that there's enemy's piece
					
			}
		}
};

#endif
