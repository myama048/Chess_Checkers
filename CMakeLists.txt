CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET (CMAKE_CXX_STANDARD 11)


ADD_EXECUTABLE(test
	unit_test.cpp
	Bishop.cpp
	Pawn.cpp
	Rook.cpp
	Knight.cpp
	King.cpp
	Queen.cpp
	Checker.cpp
	DiagonalMove.cpp
	StraightMove.cpp
	SideMove.cpp
	KnightMove.cpp
	CheckerMove.cpp
)


TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
