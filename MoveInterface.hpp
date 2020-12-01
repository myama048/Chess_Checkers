#ifndef __MOVEINTERFACE_HPP__
#define __MOVEINTERFACE_HPP__
//Mock class for testing puposes
#include <vector>
#include <utility>


class Piece;
//class Bishop;
//class Pawn;
//class Rook;
//class Queen;
//class Knight;
//class King;
//class Checker;

class MoveInterface{
	public:
		virtual bool move(std::vector<std::vector<std::pair<int,int>>>, 
					std::vector<Piece*>,int,int,int,int)=0;
};

#endif
