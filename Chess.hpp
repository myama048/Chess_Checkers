#ifndef __CHESS_HPP__
#define __CHESS_HPP__
//mock class for unit testing delete when Game branch is merged in
//
#include <vector>
#include <string>
#include "Game.hpp"

class Chess: public Game{
public:
	Chess(std::vector<std::string>):Game(){}

};

#endif
