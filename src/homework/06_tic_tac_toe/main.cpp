#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	TicTacToeManager manager;
	string player_one;

	char option= 'y';

	do {
		cout<<"Enter first player (Only X or O)\n"; 
		cin>>player_one;
		

		game.start_game(player_one);
		int position;
		while(!game.game_over())
		{
			cout<<"Enter a position\n";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}
		
		manager.save_game(game);
		cout<<"Do you want to play another game?\nEnter 'y' for yes, anything else will close the game. \n";
		cin>> option;

	}while(option == 'y' || option == 'Y');





	return 0;
}