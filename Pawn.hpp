#ifndef __PAWN_HPP__
#define __PAWN_HPP__
#include <vector>
#include <utility>
#include <cmath>
#include "MoveInterface.hpp"
#include "StraightMove.hpp"
#include "DiagonalMove.hpp"
#include "SideMove.hpp"
#include "KnightMove.hpp"
#include "Piece.hpp"

class Pawn:public Piece{
        public:
          Pawn(std::string name):Piece(name);
          bool setBehavior(MoveInterface* mv,std::string mvtype);
          bool move (std::vector<std::vector<std::pair<int,int>>> board,
               std::vector<Piece*>pieces,int startrow,int startcol,int endrow,int endcol);
};



#endif	
