//h
#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#ifndef tic_tac_toe_h_3
#define tic_tac_toe_h_3

class TicTacToe3 : TicTacToe
{
    public:
    TicTacToe3() : TicTacToe(3){}//;



    protected:




    private:
    bool check_row_win();
    bool check_column_win();
    bool check_diagonal_win();



};



















#endif