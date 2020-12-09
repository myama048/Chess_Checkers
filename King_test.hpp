#include "gtest/gtest.h"
#include "Piece.hpp"
#include "King.hpp"
#include "MoveInterface.hpp"
#include "SideMove.hpp"
#include "DiagonalMove.hpp"
#include "KnightMove.hpp"
#include <vector>
#include <utility>

TEST (KingTest,CheckStatus){
	Piece* kn=new King("King");
	EXPECT_EQ(true, kn->returnStatus());
}

TEST (KingTest, SetStatus){
        Piece* kn=new King("King");
	kn->setStatus(false);
        EXPECT_EQ(false, kn->returnStatus());

}

TEST (KingTest, Check0Moves){
        Piece* kn=new King("King");
        EXPECT_EQ(0, kn->getmovesMade());

}

TEST (KingTest, SetBehavior){
	Piece* kn= new King("King");
	MoveInterface* mv = new DiagonalMove();
	EXPECT_EQ(true, kn->setBehavior(mv, "Diagonal"));
}

TEST (KingTest, SetBehaviorWrong){
        Piece* kn= new King("King");
        MoveInterface* mv = new KnightMove();
        EXPECT_EQ(false, kn->setBehavior(mv, "Knight"));
}

TEST (KingTest, move){
	Piece* kn= new King("King");
        MoveInterface* mv = new StraightMove();
	std::vector<std::vector<std::pair<int,int>>> board;
	std::vector<Piece*> pieces;
	ASSERT_EQ(true, kn->setBehavior(mv, "Straight"));
	EXPECT_EQ(false, kn->move(board,pieces,0,2,4,5));
}

TEST (KingTest, Checkmoves){
        Piece* kn= new King("King");
        MoveInterface* mv = new DiagonalMove();
        std::vector<std::vector<std::pair<int,int>>> board;
        std::vector<Piece*> pieces;
        ASSERT_EQ(true, kn->setBehavior(mv, "Diagonal"));
        ASSERT_EQ(true, kn->move(board,pieces,0,2,1,3));
	EXPECT_EQ(1,kn->getmovesMade());
}

