#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify game_over (check board is full)")
{
	TicTacToe game(3);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);
}


TEST_CASE("Verify player is X when called as X")
{
	TicTacToe game(3);

	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Verify player is O when called as O")
{
	TicTacToe game(3);

	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Verify winner is C (That it is a tie)")
{
	TicTacToe game(3);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "C");

}

TEST_CASE("Test win by First Column")
{
	TicTacToe game(3);
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by Second Column")
{
	TicTacToe game(3);
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by Third Column")
{
	TicTacToe game(3);
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by First Row")
{
	TicTacToe game(3);
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by Second Row")
{
	TicTacToe game(3);
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by Third Row")
{
	TicTacToe game(3);
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by Top left Diagonal")
{
	TicTacToe game(3);
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by Bottom Left Diagonal ")
{
	TicTacToe game(3);
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify Get Winner Totals returns Correct Values")
{
	TicTacToe game(3);
	game.start_game("X");
	
	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X"); // <----------

}

// TEST_CASE("Verify Get Winner Returns Correct Value")
// {
// 	TicTacToe game;
// 	TicTacToeManager manager;


// 	int x, o, t;

// 	/*     FIRST GAME     */
// 	game.start_game("X");
	
// 	game.mark_board(7);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(1);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(3);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(8);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(5);
// 	REQUIRE(game.game_over() == true);

// 	REQUIRE(game.get_winner() == "X"); // <----------
// 	manager.save_game(game);
// 	manager.get_winner_totals(x, o, t);
// 	REQUIRE(x == 1);
// 	REQUIRE(o == 0);
// 	REQUIRE(t == 0);
	
// 	/*    SECOND GAME     */
// 	game.start_game("X");
	
// 	game.mark_board(7);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(1);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(3);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(8);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(5);
// 	REQUIRE(game.game_over() == true);

// 	REQUIRE(game.get_winner() == "X"); // <----------
// 	manager.save_game(game);
// 	manager.get_winner_totals(x, o, t);
// 	REQUIRE(x == 2);
// 	REQUIRE(o == 0);
// 	REQUIRE(t == 0);


// 	/*     THIRD GAME     */
// 	game.start_game("O");
	
// 	game.mark_board(7);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(1);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(3);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(8);
// 	REQUIRE(game.game_over() == false);

// 	game.mark_board(5);
// 	REQUIRE(game.game_over() == true);

// 	REQUIRE(game.get_winner() == "O"); // <----------
// 	manager.save_game(game);
// 	manager.get_winner_totals(x, o, t);
// 	REQUIRE(x == 2);
// 	REQUIRE(o == 1);
// 	REQUIRE(t == 0);

// }