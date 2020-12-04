#ifndef __STRAIGHT_MOVE_HPP__
#define __STRAIGHT_MOVE_HPP__

#include "MoveInterface.hpp"
#include <utility>
#include <vector>
#include "Pawn.hpp"
#include "Piece.hpp"
//class MoveInterface;

class StraightMove : public MoveInterface {
	public:
		bool move(std::vector<std::vector<std::pair<int , int>>> Board, std::vector<Piece*> v_p, int sx, int sy, int dx, int dy){
			//int user = v_p[idxPieceVector]->get_user(); // need to get user
			if(sy != dy){ //column should be the same
				printf("need to move\n");
				return false;
			}
			if(sx == dx){ // move is not done
				printf("can't go side\n");
				return false;
			}
			if(!(sx >= 0 && sx <= 7 && sy >= 0 && sy <= 7 && dx >= 0 && dx <= 7 && dy >= 0 && dy <= 7)){
				printf("not in range\n");
				return false;
			}
			
			for(int i = sx + 1; i < dx - 1; i++){ // loop to check all spots in between sy & (dy - 1) are open
				if(Board[i][sy].first != 0){ // 0 means the board is empty
					printf("there's oppenet's piece\n");
					return false;
				}
			}
	
			if(Board[sx][sy].first == Board[dx][dy].first){ // there's other piece on [dx][dy]
				printf("there's your piece\n");
				return false;		// 1 means your piece
			}	
				
			else if(Board[dx][dy].first != 0){ // 2 means that there's enemy's piece
				printf("take it\n");
				v_p[Board[dx][dy].second]->setStatus(false);// set status of enemy's piece to be taken
			}

			Board[dx][dy].first = Board[sx][sy].first;// new location to be occupied
			//printf("set dx,dy original\n");
			printf("[dx][dy]: %d\n", Board[dx][dy].first);
			Board[sx][sy].first = 0; // update the start to be empty, 0 = empty
			printf("[sx][sy]: %d\n", Board[sx][sy].first);
			//printf("set sx,sy 0\n");
			return true;
		}
};

#endif
