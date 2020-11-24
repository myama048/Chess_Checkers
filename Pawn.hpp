#ifndef __PAWN_HPP__
#define __PAWN_HPP__
#include <vector>
#include <utility>
#include <cmath>
#include "MoveInterface.hpp"
#include "StraightMove.hpp"
#include "DiagonalMove.hpp"



class Pawn:public Piece{
        public:
          Pawn(std::string name):Piece(name){move_limit=2;}
          bool setBehavior(MoveInterface* mv,std::string mvtype){
          if (behavior!=nullptr)delete[]behavior;
          if (mvtype!="Straight"&&mvtype!="Diagonal")return false;
          behavior=mv;
          return true;
          }
          bool move (std::vector<std::vector<std::pair<int,int>>> board,
               std::vector<Pieces>,int startrow,int startcol,int endrow,int endcol){
               if(abs(startrow-endrow)>move_limit||abs(startcol-endcol)>move_limit)return false;
               if(startcol!=endcol&&(board[endrow][endcol].first==board[startrow][startcol].first||board[endrow][endcol].first==1)return false;
               if (behavior.move()==false)return false;
               move_limit=1;
               movesMade++;
               return true;
               
          } 
}



#endif	
