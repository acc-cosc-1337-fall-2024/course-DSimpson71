//cpp
#include <vector>
#include <iostream>
#include <string>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin; using std::string; using std::vector;

void TicTacToeManager::update_winner_count(std::string winner)
{
    // TicTacToe game;
    // games.push_back(game);
    if(winner == "X")
    {
        Xwins +=1;
    }
    else if(winner == "O")
    {
        Owins += 1;
    }
    else  //if(winner == "C")
    {
        ties +=1;
    }
}

void TicTacToeManager::save_game(TicTacToe s) //add the TicTacToe to games vector with push_back
{
    update_winner_count(s.get_winner());
    games.push_back(s);
    get_winner_totals(Xwins,Owins,ties);
    


}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
    x=Xwins; o=Owins; t=ties;
    std::cout<<"xwins= "<<Xwins<<", ";
    std::cout<<"Owins= "<<Owins<<", ";
    std::cout<<"Ties= "<<ties<<"\n";
}