#ifndef __KING_HPP__
#define __KING_HPP__
#include <vector>
#include <utility>
#include <cmath>
#include "MoveInterface.hpp"
#include "StraightMove.hpp"
#include "SideMove.hpp"
#include "DiagonalMove.hpp"



class King:public Piece{
        public:
          King(std::string name):Piece(name){move_limit=1;}
          bool setBehavior(MoveInterface* mv,std::string mvtype){
          if (behavior!=nullptr)delete[]behavior;
          if (mvtype!="Straight"&&mvtype!="Side"&&mvtype!="Diagonal")return false;
          behavior=mv;
          return true;
          }
          bool move (std::vector<std::vector<std::pair<int,int>>> board,
               std::vector<Pieces>,int startrow,int startcol,int endrow,int endcol){
               if(abs(startrow-endrow)>move_limit||abs(startcol-endcol)>move_limit)return false;
               if (behavior.move()==false)return false;
               movesMade++;
               return true;
               
          } 
}



#endif	
