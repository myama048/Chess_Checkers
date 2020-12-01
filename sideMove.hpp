#ifndef __SIDEMOVE_HPP__
#define __SIDEMOVE_HPP__
#include <vector>
#include <utility>
#include "MoveInterface.hpp"

class SideMove : public MoveInterface{
	public:
		bool move(std::vector<std::vector<std::pair<int,int>>> board, std::vector<Piece*> v_p,int sx,int sy,int dx,int dy){
			if(sy != dy)
				return false;
			if(sx == dx)
				return false;
			if(!(sx >= 0 && sx <= 7 && sy >= 0 && sy <= 7 && dx >= 0 && dx <= 7 && dy >= 0 && dy <= 7))
				return false;

			if(sx < dx){ // moving to the right
				for(int i = sx + 1; i < dx - 1; i++){
					if(board[i][sy].first != 0)
						return false;
				}
			}
			else{
				for(int i = sx - 1; i > dx + 1; i--){
					if(board[i][sy].first != 0)
						return false;
				}
			}

			if(board[sx][sy].first == board[dx][dy].first){
				return false;
			}
			else if(board[dx][dy].first != 0){ // enemy's on dx,dy
				v_p[board[dx][dy].second]->setStatus(false);
			}
			
			board[dx][dy].first = board[sx][sy].first; // update dest
			board[sx][sy].first = 0; // starting posi is set open

			return true;
		}
};


#endif
