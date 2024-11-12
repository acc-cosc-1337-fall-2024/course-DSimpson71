//h
#include <string>
#include <vector>
#include <iostream>
#ifndef tic_tac_toe_h
#define tic_tac_toe_h

class TicTacToe
{

public:
    bool game_over();
    void start_game(std::string player_one);
    void mark_board(int position);
    std::string get_player() const{return player;};
    void display_board() const;
    std::string get_winner() {return winner;};
    

private:
    std::string player;
    std::string winner = "C";
    std::vector<std::string> pegs {9, " "};
    void clear_board(); // Might be public, lets see
    void set_next_player();
    bool check_board_full();	
    
    bool check_row_win();
    bool check_column_win();
    bool check_diagonal_win();
    void set_winner(){if(player== "X"){winner= "O";} else{winner= "X";}};
};


//Free Functions
void Make_X_or_O(std::string &player); //Normalize Input 


#endif