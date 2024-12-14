#include "tic_tac_toe_3.h"


//Private 

bool TicTacToe3::check_row_win() //This function should be called but isnt being called
{
    if((pegs[0] == "X") && (pegs[1] == "X") && (pegs[2] == "X")) // Check rows for X wins
    {
        return true;
    }
    else if((pegs[3] == "X") && (pegs[4] == "X") && (pegs[5] == "X"))
    {
        return true;
    }
    else if((pegs[6] == "X") && (pegs[7] == "X") && (pegs[8] == "X"))
    {
        return true;
    }
    
    else if((pegs[0] == "O") && (pegs[1] == "O") && (pegs[2] == "O")) // Check rows for O wins
    {
        return true;
    }
    else if((pegs[3] == "O") && (pegs[4] == "O") && (pegs[5] == "O"))
    {
        return true;
    }
    else if((pegs[6] == "O") && (pegs[7] == "O") && (pegs[8] == "O"))
    {
        return true;
    }
    //If all these are not true then return false for a row win
    else
        return false;
}
bool TicTacToe3::check_column_win()
{
    if((pegs[0] == "X") && (pegs[3] == "X") && (pegs[6] == "X")) // Check Column for X wins
    {
        // cout<<"First Column X win \n";
        return true;
    }
    else if((pegs[1] == "X") && (pegs[4] == "X") && (pegs[7] == "X"))
    {
       
        return true;
    }
    else if((pegs[2] == "X") && (pegs[5] == "X") && (pegs[8] == "X"))
    {
        
        return true;
    }
    
    else if((pegs[0] == "O") && (pegs[3] == "O") && (pegs[6] == "O")) // Check columns for O wins
    {
        
        return true;
    }
    else if((pegs[1] == "O") && (pegs[4] == "O") && (pegs[7] == "O"))
    {
        
        return true;
    }
    else if((pegs[2] == "O") && (pegs[5] == "O") && (pegs[8] == "O"))
    {
    
        return true;
    }
    //If all these are not true then return false for a column win
    else
        return false;
}
bool TicTacToe3::check_diagonal_win()
{
    if((pegs[0] == "O") && (pegs[4] == "O") && (pegs[8] == "O"))  //Check for Diagonal O wins
    {

        return true;
    }

    else if((pegs[6] == "O") && (pegs[4] == "O") && (pegs[2] == "O"))
    {
        
        return true;
    }

    else if((pegs[0] == "X") && (pegs[4] == "X") && (pegs[8] == "X"))  //Check for Diagonal X wins
    {
        
        return true;
    }

    else if((pegs[6] == "X") && (pegs[4] == "X") && (pegs[2] == "X"))
    {
        
        return true;
    }

    else 
        return false;

}



/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
