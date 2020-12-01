CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET (CMAKE_CXX_STANDARD 11)


ADD_EXECUTABLE(test
	unit_test.cpp
	Piece.cpp
	Bishop.cpp
	Rook.cpp
	Knight.cpp
	King.cpp
	Queen.cpp
	Pawn.cpp
	Checker.cpp
	SideMove.cpp
	KnightMove.cpp
	CheckerMove.cpp
	DiagonalMove.cpp
	StraightMove.cpp
	Gameplay.cpp
)


TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
