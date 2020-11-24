#ifndef __QUEEN_HPP__
#define __QUEEN_HPP__
#include <vector>
#include <utility>
#include "MoveInterface.hpp"
#include "StraightMove.hpp"
#include "SideMove.hpp"
#include "DiagonalMove.hpp"



class Queen:public Piece{
        public:
          Queen(std::string name):Piece(name){move_limit=0;}
          bool setBehavior(MoveInterface* mv,std::string mvtype){
          if (behavior!=nullptr)delete[]behavior;
          if (mvtype!="Straight"&&mvtype!="Side"&&mvtype!="Diagonal")return false;
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

