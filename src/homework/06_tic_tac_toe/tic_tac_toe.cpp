//cpp
#include "tic_tac_toe.h"
using std::cout;


// Public Functions 

bool TicTacToe::game_over()  
{
    if(check_row_win());
    check_column_win();
    check_diagonal_win();
    return check_board_full();
}

void TicTacToe::start_game(std::string player_one)
{
    player = player_one;
    clear_board();
    
}

void TicTacToe::mark_board(int position)
{
    pegs[position -1]= player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    
    for(long unsigned int i = 0;i < pegs.size();i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
    
}

std::string TicTacToe::get_winner()
{
    //cout<<""<<winner<<"\n";
    return winner;
}



//Private Functions 

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}
void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0; i<pegs.size(); i++)
    {
        if(pegs[i]== " ")
        {
            return false;
        }
    }
    return true;
}



bool TicTacToe::check_row_win() //This function should be called but isnt being called
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
bool TicTacToe::check_column_win()
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
bool TicTacToe::check_diagonal_win()
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
void TicTacToe::set_winner()
{
    if(player== "X")
        {winner= "O";}
    else
        {winner= "X";}
}

// Free Functions



void Make_X_or_O(std::string &player) //Normalize Input: if X or O wasnt put in, Defaults to X
{
    if(player != "O")
		{
			player ="X";
		} 
    cout<<"Player one is "<<player<<".\n";
}