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
    

private:
    std::string player;
    std::vector<std::string> pegs {9, " "};
    void clear_board(); // Might be public, lets see
    void set_next_player();
    bool check_board_full();
};


#endif