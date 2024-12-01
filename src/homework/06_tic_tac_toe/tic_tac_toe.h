//h
#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe_manager.h"
#ifndef tic_tac_toe_h
#define tic_tac_toe_h

class TicTacToe
{

public:
    
   // TicTacToe(int size=3){pegs.resize(size*size, " ");};
    TicTacToe(int s=3) :pegs(s*s, " "){}; // Remove the number and this text

    bool game_over();
    void start_game(std::string player_one);
    void mark_board(int position);
    std::string get_player() const{return player;};
    void display_board() const;
    std::string get_winner() {return winner;};
   

protected:

    std::vector<std::string> pegs; // {9, " "};
    virtual bool check_row_win();
    virtual bool check_column_win();
    virtual bool check_diagonal_win();

private:

    std::string player;
    std::string winner = "C";
    
    void clear_board(); // Might be public, lets see
    void set_next_player();
    bool check_board_full();	
    
    
    //void set_winner(){if(player== "X"){winner= "O";} else{winner= "X";}}; <<< old code
    void set_winner();


    
};


//Free Functions



#endif