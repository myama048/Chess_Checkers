#ifndef __KNIGHT_HPP__
#define __KNIGHT_HPP__
#include <vector>
#include <utility>
#include <cmath>
#include "MoveInterface.hpp"
#include "KnightMove.hpp"




class Knight:public Piece{
        public:
          Knight(std::string name):Piece(name){move_limit=3;}
          bool setBehavior(MoveInterface* mv,std::string mvtype){
          if (behavior!=nullptr)delete[]behavior;
          if (mvtype!="Knight")return false;
          behavior=mv;
          return true;
          }
          bool move (std::vector<std::vector<std::pair<int,int>>> board,
               std::vector<Pieces>,int startrow,int startcol,int endrow,int endcol){
               if(abs(startrow-endrow)+abs(startcol-endcol)>move_limit)return false;
               if (behavior.move()==false)return false;
               movesMade++;
               return true;
               
          } 
}



#endif	
