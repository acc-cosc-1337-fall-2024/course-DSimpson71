#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

#include <iostream>

using std::cout; using std::cin; using std::string; using std::make_unique;

int main() 
{
	
	TicTacToeManager manager;
	string player_one;

	char option = 'y';
	unique_ptr<TicTacToe> game;
	int gametype; 

	do {
		cout<<"Please enter 3 or 4 to specify the type of TicTacToe game you want to play\n";
		cin>>gametype;
		if(gametype==3)
		{
			game = make_unique<TicTacToe3>();
		}
		else if(gametype== 4)
		{
			game = make_unique<TicTacToe4>();
		}
		cout<<"Enter first player (Only X or O)\n"; 
		cin>>player_one;
		

		game->start_game(player_one);
		int position;
		while(!game->game_over())
		{
			cout<<"Enter a position\n";
			cin>>position;
			game->mark_board(position);
			game->display_board();
		}
		
		manager.save_game(game);
		cout<<"Do you want to play another game?\nEnter 'y' for yes, anything else will close the game. \n";
		cin>> option;

	}while(option == 'y' || option == 'Y');





	return 0;
}