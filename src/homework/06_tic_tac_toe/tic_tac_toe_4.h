//h
#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#ifndef tic_tac_toe_h_4
#define tic_tac_toe_h_4

class TicTacToe4 : TicTacToe
{
    public:
    TicTacToe4() : TicTacToe(4){};



    protected:




    private:
    bool check_row_win();
    bool check_column_win();
    bool check_diagonal_win();



};






#endif