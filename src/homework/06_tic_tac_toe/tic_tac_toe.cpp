//cpp
#include "tic_tac_toe.h"
using std::cout;


// Public Functions 

bool TicTacToe::game_over()  
{
    return check_board_full();
    check_row_win();
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
    cout<<""<<winner<<"\n";
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
    cout<<"Check row was ran \n";
    if(pegs[1] == "X" && pegs[2] == "X" && pegs[3] == "X")
    {
        cout<<"WINNNNERRRR \n";
    }
    return false;
}
bool check_column_win();
bool check_diagonal_win();
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