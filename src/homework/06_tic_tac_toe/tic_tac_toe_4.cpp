#include "tic_tac_toe_4.h"
#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe_manager.h"



bool TicTacToe4::check_row_win()
{
    if((pegs[0] == "X") && (pegs[1] == "X") && (pegs[2] == "X") && (pegs[3] == "X")) // Check rows for X wins
    {
        return true;
    }
    else if((pegs[4] == "X") && (pegs[5] == "X") && (pegs[6] == "X") && (pegs[7] == "X"))
    {
        return true;
    }
    else if((pegs[8] == "X") && (pegs[9] == "X") && (pegs[10] == "X") && (pegs[11] == "X"))
    {
        return true;
    }
    else if((pegs[12] == "X") && (pegs[13] == "X") && (pegs[14] == "X") && (pegs[15] == "X"))
    {
        return true;
    }
    else if((pegs[0] == "O") && (pegs[1] == "O") && (pegs[2] == "O") && (pegs[3] == "O")) // Check rows for O wins
    {
        return true;
    }
    else if((pegs[4] == "O") && (pegs[5] == "O") && (pegs[6] == "O") && (pegs[7] == "O"))
    {
        return true;
    }
    else if((pegs[8] == "O") && (pegs[9] == "O") && (pegs[10] == "O") && (pegs[11] == "O"))
    {
        return true;
    }
    else if((pegs[12] == "O") && (pegs[13] == "O") && (pegs[14] == "O") && (pegs[15] == "O"))
    {
        return true;
    }
    else
        return false;
}
bool TicTacToe4::check_column_win()
{
   if((pegs[0] == "X") && (pegs[4] == "X") && (pegs[8] == "X") && (pegs[12] == "X")) // Check columns for X wins
    {
        return true;
    }
    else if((pegs[1] == "X") && (pegs[5] == "X") && (pegs[9] == "X") && (pegs[13] == "X"))
    {
        return true;
    }
    else if((pegs[2] == "X") && (pegs[6] == "X") && (pegs[10] == "X") && (pegs[14] == "X"))
    {
        return true;
    }
    else if((pegs[3] == "X") && (pegs[7] == "X") && (pegs[11] == "X") && (pegs[15] == "X"))
    {
        return true;
    }
    else if((pegs[0] == "O") && (pegs[4] == "O") && (pegs[8] == "O") && (pegs[12] == "O")) // Check columns for O wins
    {
        return true;
    }
    else if((pegs[1] == "O") && (pegs[5] == "O") && (pegs[9] == "O") && (pegs[13] == "O"))
    {
        return true;
    }
    else if((pegs[2] == "O") && (pegs[6] == "O") && (pegs[10] == "O") && (pegs[14] == "O"))
    {
        return true;
    }
    else if((pegs[3] == "O") && (pegs[7] == "O") && (pegs[11] == "O") && (pegs[15] == "O"))
    {
        return true;
    }
    else
        return false;
}
bool TicTacToe4::check_diagonal_win()
{

    if((pegs[0] == "X") && (pegs[5] == "X") && (pegs[10] == "X") && (pegs[15] == "X")) // Check diagonals for X wins
    {
        return true;
    }
    else if((pegs[3] == "X") && (pegs[6] == "X") && (pegs[9] == "X") && (pegs[12] == "X"))
    {
        return true;
    }
    else if((pegs[0] == "O") && (pegs[5] == "O") && (pegs[10] == "O") && (pegs[15] == "O")) //Check diagonals for O wins
    {
        return true;
    }
    else if((pegs[3] == "O") && (pegs[6] == "O") && (pegs[9] == "O") && (pegs[12] == "O"))
    {
        return true;
    }
    else
        return false;
}


/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
