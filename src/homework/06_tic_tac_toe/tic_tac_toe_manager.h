//h
#include <string>
#include <vector>
#include <iostream>
//#include "tic_tac_toe.h"
#ifndef tic_tac_toe_manager_h
#define tic_tac_toe_manager_h
#include "tic_tac_toe.h"

class TicTacToeManager
{
    //friend 
    public:
    void save_game(TicTacToe s);
    void get_winner_totals(int& x, int& o, int& t);


    private:
    int ties = 0;
    int Xwins = 0;
    int Owins = 0;
    std::vector <TicTacToe> games;

    void update_winner_count(std::string winner);
    

};



#endif
