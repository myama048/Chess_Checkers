#ifndef __CHECKER_HPP__
#define __CHECKER_HPP__
#include <vector>
#include <utility>
#include <cmath>
#include "MoveInterface.hpp"
#include "CheckerMove.hpp"




class Checker:public Piece{
        public:
          Checker(std::string name,int moveLim):Piece(name){move_limit=2;}
          bool setBehavior(MoveInterface* mv,std::string mvtype){
          if (behavior!=nullptr)delete[]behavior;
          if (mvtype!="Checker")return false;
          behavior=mv;
          return true;
          }
          bool move (std::vector<std::vector<std::pair<int,int>>> board,
               std::vector<Pieces>,int startrow,int startcol,int endrow,int endcol){
               if (abs(startrow-endrow)>move_limit||abs(startcol-endcol)>move_limit)return false;
               if (behavior.move()==false)return false;
               movesMade++;
               return true;
               
          } 
}



#endif	
