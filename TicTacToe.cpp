/*********************************************************************
** Author: Tyler Forrester
** Date: 5/18/2016
** Description: TicTacToe.cpp for tictactoe game contains makeMove and gameState Functions
*********************************************************************/

#include "TicTacToe.hpp"
#include <string>

/*********************************************************************
** Author: Tyler Forrester
** Function: TicTacToe constructor
** Description: Initializes whose turn it is along with the game board
*********************************************************************/

TicTacToe::TicTacToe(char turn)
{
	whoseTurn = turn; 
	bo = Board(); 
}
/*********************************************************************
** Author: Tyler Forrester
** Function: Play()
** Description: Plays the tic toe game while gamestate is unfinished. Makes a player try again if his move is already been taken. Returns Strings for the Enums when game ends. 
*********************************************************************/


string TicTacToe::Play()
{

	while (bo.gameState() == UNFINISHED) {
		int i = -1;
		int j = -1;
		bo.print();
		cout << "Player " << whoseTurn << ",  please enter the position of your move: first entry row and second entry column" << endl;
		cin >> i;
		cin >> j;

		while (bo.makeMove(i, j, whoseTurn) == false) {
			i = -1;
			j = -1;
			bo.print();
			cout << "Player " << whoseTurn << ", you have entered an invalid move. Please try again." << endl;
			cin >> i;
			cin >> j;

		}


		if (whoseTurn == 'o') {

			whoseTurn = 'x';
		}
		else {
			whoseTurn = 'o';
		}



	}

	if (bo.gameState() == X_WON) {

		return "X is the Winner";
	}

	else if (bo.gameState() == O_WON) {
		return "O is the Winner";


	}
	else {

		return "Lame. It's a Draw";
	}

} 
/*********************************************************************
** Author: Tyler Forrester
** Function: main
** Description: Starts Game. Prints Winner
*********************************************************************/



int main() {

	char turn;

	cout << "Whose turn is it, 'x' or 'o' ?" << endl;
	cin >> turn;

	TicTacToe tic = TicTacToe(turn);
	string win = tic.Play();


	cout << win << endl;



	return 0;
}