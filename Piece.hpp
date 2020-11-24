#ifndef  __PIECE_HPP__
#define  __PIECE_HPP__

#include <vector>
#include <utility>
#include <string>
#include "MoveInterface.hpp"

class Piece{
    private:
        std::string name;
        MoveInterface* behavior;
        bool is_active;
        int move_limit;
        int movesMade;
    public:
        Piece(std::string name){
        this->name=name;
        movesMade=0;
        behavior=nullptr;
        }
        bool returnStatus(){return is_active;}
        void setStatus(bool stat){is_active=stat;}
        virtual bool move (std::vector<std::vector<std::pair<int,int>>> board,
               std::vector<Pieces>,int startrow,int startcol,int endrow,int endcol)=0;
        std::string getName(){return name}
        virtual bool setBehavior(MoveInterface* mv,std:string)=0;
        int getmovesMade(){return movesMade;}
        


}



#endif	
