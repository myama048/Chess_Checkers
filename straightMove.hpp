#ifndef __STRAIGHT_MOVE_HPP__
#define __STRAIGHT_MOVE_HPP__

#include "MoveInterface.hpp"

class MoveInterface;

class StraightMove : public MoveInterface {
	public:
		bool move(std::vector<std::vector<std::pair<int posiStatus, int idxPieceVector>>> Board, std::vector<Pieces*> v_p, int sx, int sy, int dx, int dy){
			//int user = v_p[idxPieceVector]->get_user(); // need to get user
			if(sx != dx) //column should be the same
				return false;
			if(sy == dy) // move is not done
				return false;
			
			if(Board[sx][sy].first == 1){ //player 1 's POV
				for(int i = sy + 1; i < dy - 1; i++){ // loop to check all spots in between sy & (dy - 1) are open
					if(Board[sx][i].first != 0) // 0 means the board is empty
						return false;
				}
	
				if(Board[dx][dy].first == 1){ // there's other piece on [dx][dy]
					return false;		// 1 means your piece
				}	
					
				if(Board[dx][dy].first == 2){ // 2 means that there's enemy's piece
					vp[Board[sx][sy].second]->setStatus(false);// set status of enemy's piece to be taken
				}

				Board[sx][sy].first = 0; // update the start to be empty 0 = empty
				Board[dx][dy].first = 1;// new location to be occupied
			}
			else if(Board[sx][sy].first == 2){ // player 2 's POV
				new_sx = 9 - sx;
				new_sy = 9 - sy;
				new_dx = 9 - dx;
				new_dy = 9 - dy;
				for(int i = new_sy - 1; i > dy + 1; i--){
					if(Board[new_sx][i].first != 0)
						return false;
				}

				if(Board[new_dx][new_dy].first == 2)
					return false;

				if(Board[new_dx][new_dy].first == 1){
					vp[Board[sx][sy].second]->setStatus(false);
				}

				Board[new_sx][new_sy].first = 0;
				Board[new_dx][new_dy] = 2;
			}
			return true;
		}
};

#endif
