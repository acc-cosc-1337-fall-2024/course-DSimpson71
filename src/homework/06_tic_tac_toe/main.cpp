#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string player_one;

	char option= 'y';

	do {
		cout<<"Enter first player\n";
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

		cout<<"Do you want to play another game?\nEnter Y for yes or anything else for no\n";
		cin>> option;

	}while(option == 'y' || option == 'Y');





	return 0;
}