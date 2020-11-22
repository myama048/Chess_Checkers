#ifndef __CHECKERS_HPP__
#define __CHECHERS_HPP__
//mock class for unit testing delete when Game branch is merged in
//
#include <vector>
#include <string>
#include "Game.hpp"

class Checkers: public Game{
public:
	Checkers(std::vector<std::string>):Game(){}

};

#endif
