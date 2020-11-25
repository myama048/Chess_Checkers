#ifndef __SIDEMOVE_HPP__
#define __SIDEMOVE_HPP__
//Mock class for testing puposes
#include <vector>
#include <utility>
#include "MoveInterface.hpp"
#include "Piece.hpp"

class Piece;

class SideMove:public MoveInterface{
	public:
		bool move(std::vector<std::vector<std::pair<int,int>>>board, 
				std::vector<Piece*>pieces,int sx,int sy,int dx,int dy);
};


#endif
