#ifndef __STRAIGHT_TEST_HPP__
#define __STRAIGHT_TEST_HPP__

#include "gtest/gtest.h"
#include "straightMove.hpp"
#include "Piece.hpp"
#include "Pawn.hpp"
#include <vector>
#include <utility>
using namespace std;
//std::vector<std::vector<std::pair<int posiStatus, int idxPieceVector>>> board;
//std::vector<Pieces*> v_p;

TEST(straightMove, StraightByOne){
	vector<Pieces*> v_p;
	vector<vector<pair<int posiStatus, int idxPieceVector>>> board;
	Piece* pawn = new Pawn("Pawn");
	MoveInterface* mv = new StraightMove();
	pawn->setBehavior(mv, "Straight");
	v_p.push_back(new Pawn());
	board.at(0).at(0) = pawn;
	EXPECT_TRUE(pawn->move(board, v_p, 0, 0, 0, 1));
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
