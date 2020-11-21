nclude "Gameplay.hpp"
#include <vector>
#include <string>
#include "Game"

void Gameplay::SetNames(){
    int num;
    std::cout<<"How many Players are there?\n";
    std::cin>>num;
    playernum=num;
    std::cin.ignore(1000,'\n');
    for (int i=0;i<num; i++){
        std::string input;
        std::cout<<"Please enter a player's name: \n";
        getline(std::cin,input);
        names.push_back(input);
    }
}

void Gameplay::ChooseGame(){
    std::cout<<"What game would you like to play?\n";
    std::cout<<"1.Checkers\n";
    std::cout<<"2.Chess\n";
    std::cout<<"3.Make Your Own Rules Chess\n";
    std::cin>>gamechoice;
    if (gamechoice<1||gamechoice>3){
        std::cout<<"Invalid Input\n";
        ChooseGame();
    }
}
void Gameplay::PrintNames(){
    std::cout<<"Player Names:\n";
    for (int i=0; i< names.size(); i++){
        std::cout<<names[i]<<std::endl;
    }
}
void Gameplay::Menu(){
    int input;
    do{
        std::cout<<"Select Action\n";
        std::cout<<"1.Enter Names\n";
        std::cout<<"2.Select Game\n";
        std::cout<<"3.Play Again\n";
        std::cout<<"4.Start Over\n";
        std::cout<<"5.Play Game\n";
        std::cout<<"6.Print Board"
        std::cout<<"7.Exit\n";
        std::cin>>input;
        if (input==1)SetNames();
        else if(input==2)ChooseGame();
        else if(input==3)PlayAgain();
        else if(input==4)Startover();
        else if(input==5)Play();
        else if(input==6)PrintBoard();
        else if(input==7)std::cout<<"Thank you for playing.\n";
        else std::cout<<"Invalid Input";
    }while(input!=7);
        if (game!=nullptr)delete[]game;
}
void Gameplay::PrintBoard(){
    if (game!=nullptr)game.PrintBoard();
    else std::cout<<"No game to print board from\n";
}
void Gameplay::Startover(){
    if (game!=nullptr)delete [] game;
    playernum=0;
    gamechoice=0;
    names.clear();
}
void Gameplay::Play(){
    if (gamechoice<1||gamechoice>3)ChooseGame();
    if (names.size()==0)SetNames();
    MakeGame();
    game.playGame();
}
void Gameplay::MakeGame(){
    if (gamechoice==1)game=new Checkers(names);
    else if (gamechoice==2)game=new Chess(names);
    else if (gamechoice==3)game=new MakeyourOwn(names);    
}
void Gameplay::PlayAgain(){
    if(game!=nullptr)delete[]game;
    Play();
}
