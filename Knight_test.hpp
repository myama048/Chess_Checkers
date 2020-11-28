#include "gtest/gtest.h"
#include "Piece.hpp"
#include "Knight.hpp"
#include "MoveInterface.hpp"
#include "KnightMove.hpp"
#include "StraightMove.hpp"
#include "DiagonalMove.hpp"
#include <vector>
#include <utility>

TEST (KnightTest,CheckStatus){
	Piece* knight=new Knight("Knight");
	EXPECT_EQ(true, knight->returnStatus());
}

TEST (KnightTest, SetStatus){
        Piece* knight=new Knight("Knight");
	knight->setStatus(false);
        EXPECT_EQ(false, knight->returnStatus());

}

TEST (KnightTest, Check0Moves){
        Piece* knight=new Knight("Knight");
        EXPECT_EQ(0, knight->getmovesMade());

}

TEST (KnightTest, SetBehavior){
	Piece* knight= new Knight("Knight");
	MoveInterface* mv = new KnightMove();
	EXPECT_EQ(true, knight->setBehavior(mv, "Knight"));
}

TEST (KnightTest, SetBehaviorWrong){
        Piece* knight= new Knight("Knight");
        MoveInterface* mv = new KnightMove();
        EXPECT_EQ(false, knight->setBehavior(mv, "Straight"));
}

TEST (KnightTest, move){
	Piece* knight= new Knight("Knight");
        MoveInterface* mv = new KnightMove();
	std::vector<std::vector<std::pair<int,int>>> board;
	std::vector<Piece*> pieces;
	ASSERT_EQ(true, knight->setBehavior(mv, "Knight"));
	EXPECT_EQ(false, knight->move(board,pieces,0,0,1,2));
}

TEST (KnightTest, Checkmoves){
        Piece* knight= new Knight("Knight");
        MoveInterface* mv = new KnightMove();
        std::vector<std::vector<std::pair<int,int>>> board;
        std::vector<Piece*> pieces;
        ASSERT_EQ(true, knight->setBehavior(mv, "Knight"));
        ASSERT_EQ(false, knight->move(board,pieces,0,0,1,2));
	EXPECT_EQ(0,knight->getmovesMade());
}

