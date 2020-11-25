#ifndef __BISHOP_HPP__
#define __BISHOP_HPP__
#include <vector>
#include <utility>
#include "Piece.hpp"
#include "MoveInterface.hpp"
#include "DiagonalMove.hpp"
#include "StraightMove.hpp"
#include "SideMove.hpp"
#include "KnightMove.hpp"

class MoveInterface;

class Bishop : public Piece{
        public:
          Bishop(std::string name):Piece(name);
          bool setBehavior(MoveInterface* mv,std::string mvtype);
          bool move (std::vector<std::vector<std::pair<int,int>>> board,
               std::vector<Piece*>pieces,int startrow,int startcol,int endrow,int endcol);
};



#endif	
