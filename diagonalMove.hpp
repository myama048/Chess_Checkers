#ifndef __DIAGONALMOVE_HPP__
#define __DIAGONALMOVE_HPP__

#include "MoveInterface.hpp"
#include <vector>
#include <utility>
//class MoveInterface;

class DiagonalMove : public MoveInterface {
	public:
		bool move(std::vector<std::vector<std::pair<int, int>>> board, std::vector<Piece*> v_p, int sx, int sy, int dx, int dy){
			if(!(dx - sx == dy - sy))
				return false;
			if(sx == dx || sy == dy)
				return false;
			if(!(sx >= 0 && sx <= 7 && sy >= 0 && dy <= 7 && dx >= 0 && dx <= 7 && dy >= 0 && dy <= 7))
				return false;

			if(sy < dy){ //upward
				if(sx < dx){
					for(int i = 0; i + 1 < dy - sy; i++){
						if(board[sx + i][sy + i].first != 0)
							return false;
					}
				}
				else{ //upper left
					for(int i = 0; i + 1 < dy - sy; i++){
						if(board[sx - i][sy + i].first != 0)
							return false;
					}
				}
			}
			else{
				if(sx < dx){//lower right
					for(int i = 0; i + 1 < dx - sx; i++){
						if(board[sx + i][sy - i].first != 0)
							return false;
				}
				else{ //lower left
					for(int i = 0; i + 1 < sx - dx; i++){
						if(board[sx - i][sy - i].first != 0)
							return false;
					}
				}
			}

			if(board[sx][sy].first == board[dx][dy]){
				return false;
			}
			else if(board[dx][dy].first != 0){
				v_p[board[dx][dy].second]->setStatus(false);
			}

			board[dx][dy].first = board[sx][sy].first;
			board[sx][sy].first = 0;
			return true;
		}
};

#endif
