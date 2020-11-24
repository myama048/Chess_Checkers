#ifndef __BISHOP_HPP__
#define __BISHOP_HPP__
#include <vector>
#include <utility>
#include "MoveInterface.hpp"
#include "DiagonalMove.hpp"



class Bishop:public Piece{
        public:
          Rook(std::string name):Piece(name){move_limit=0;}
          bool setBehavior(MoveInterface* mv,std::string mvtype){
          if (behavior!=nullptr)delete[]behavior;
          if (mvtype!="Diagonal")return false;
          behavior=mv;
          return true;
          }
          bool move (std::vector<std::vector<std::pair<int,int>>> board,
               std::vector<Pieces>,int startrow,int startcol,int endrow,int endcol){
               if (behavior.move()==false)return false;
               movesMade++;
               return true;
               
          }          
}



#endif	
