#ifndef __QUEEN_HPP__
#define __QUEEN_HPP__
#include <vector>
#include <utility>
#include "MoveInterface.hpp"
#include "StraightMove.hpp"
#include "SideMove.hpp"
#include "DiagonalMove.hpp"
#include "KnightMove.hpp"
#include "Piece.hpp"

class Queen:public Piece{
        public:
          Queen(std::string name):Piece(name){move_limit=0;}
          bool setBehavior(MoveInterface* mv,std::string mvtype);
          bool move (std::vector<std::vector<std::pair<int,int>>>& board,
               std::vector<Piece*>pieces,int startrow,int startcol,int endrow,int endcol);
};



#endif

