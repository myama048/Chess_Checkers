#ifndef __MOVE_INTERFACE_HPP__
#define __MOVE_INTERFACE_HPP__

#include<vector>
#include<iostream>
#include<utility>

class MoveInterface {
	public:
		virtual bool move(std::vector<std::vector<std::pair<int, int>>> Board, std::vector<Pieces*> v_p, int sx, int sy, int dx, int dy) = 0;
};

#endif
