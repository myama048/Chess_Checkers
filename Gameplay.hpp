#ifndef __GAMEPLAY_HPP__
#define __GAMEPLAY_HPP__
#include <vector>
#include <string>
#include "Game"

Class Gameplay{
    private:
        int gamechoice;
        int playernum;
        Game* game;
        vector<std::string*>names;
    public:
        void SetNames();
        void ChooseGame();
        void PrintNames();
        void Menu();
        void PrintBoard();
        void Startover();
        void Play();
        void MakeGame();
        void PlayAgain();
}


#endif	
