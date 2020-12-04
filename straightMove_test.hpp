#ifndef __STRAIGHTMOVE_TEST_HPP__
#define __STRAIGHTMOVE_TEST_HPP__

#include "MoveInterface.hpp"
#include "gtest/gtest.h"
#include "straightMove.hpp"
#include "Piece.hpp"
#include "Pawn.hpp"
#include <vector>
#include <utility>
//using namespace std;
//std::vector<std::vector<std::pair<int posiStatus, int idxPieceVector>>> board;
//std::vector<Pieces*> v_p;

TEST(straightMove, StraightByOne){
	std::vector<Piece*> v_p;
	std::vector<std::vector<std::pair<int, int>>> board;
	std::vector<std::pair<int, int>> v1{{1,0}};
	board.push_back(v1);
	std::vector<std::pair<int,int>> v2{{0,1}};
	board.push_back(v2);
	Piece* pawn = new Pawn("Pawn");
	MoveInterface* mv = new StraightMove();
	pawn->setBehavior(mv, "Straight");
	v_p.push_back(pawn);
	//board.at(0).at(0) = pawn;
	EXPECT_EQ(true, mv->move(board, v_p, 0, 0, 1, 0));
}
/*
TEST(straightMove, StraightByMultipleOpen{
	EXPECT_TRUE(move(board, v_p, 1, 1, 1, 4));
}

TEST(straightMove, SideMove){
	EXPECT_FALSE(move(board, v_p, 2, 2, 3, 4));
}

TEST(straightMove, PieceInBetween){
	//there exists other piece at (2, 3)
	EXPECT_FALSE(move(board, v_p, 2, 2, 2, 5));
}
*/

#endif
