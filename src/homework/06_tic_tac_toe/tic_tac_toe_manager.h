//h
#include <string>
#include <vector>
#include <iostream>
#include <memory>
//#include "tic_tac_toe.h"
#ifndef tic_tac_toe_manager_h
#define tic_tac_toe_manager_h
#include "tic_tac_toe.h"
using std::unique_ptr;

class TicTacToeManager
{
    
    public:
    void save_game(unique_ptr<TicTacToe> s);
    void get_winner_totals(int& x, int& o, int& t);
    void display_all_games();
    // int read_and_verify_game_type(int gametype);


    private:
    int ties = 0;
    int Xwins = 0;
    int Owins = 0;
    std::vector <unique_ptr<TicTacToe>> games;

    void update_winner_count(std::string winner);
    

};



#endif
