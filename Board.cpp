/*********************************************************************
** Author: Tyler Forrester
** Date: 4/29/2016
** Description: Board.cpp for tictactoe game contains makeMove and gameState Functions
*********************************************************************/



#include "Board.hpp"
/*********************************************************************
** Author: Tyler Forrester
** Function: Board constructor
** Description: Initializes all game boards
*********************************************************************/
Board::Board()
{  
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = '.'; 
		}

	}
	
	}
/*********************************************************************
** Author: Tyler Forrester
** Function: makeMove
** Description: Tests move for being put into a blank space, then assigns that space to the appropriate letter
*********************************************************************/

bool Board::makeMove(int a, int b, char whoseTurn)
{
	if (board[a][b] != '.') {
		
		return false;

	}

	else {
		board[a][b] = whoseTurn;
		return true; 
	}
}

/*********************************************************************
** Author: Tyler Forrester
** Function: gameState
** Description: Tests board (Diagnols, Rows, Columns) for wins. If all spaces are filled it returns ties. Predicting Cat's games will left to V2.0. 
*********************************************************************/


State Board::gameState()
{
	if (((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) || ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]))) {

		if (board[1][1] == 'x') {
			return X_WON; 
		}
		if (board[1][1] == 'o') {
			return O_WON;
		}
	}
	for (int i = 0; i < 3; i++) {
		if ((board[i][1] == board[i][0]) && (board[i][1] == board[i][2])) {

			if (board[i][1] == 'x') {
				return X_WON;
			}
			if (board[i][1] == 'o') {
				return O_WON;
			}

		}
		if ((board[1][i] == board[0][i]) && (board[1][i] == board[2][i])) {

			if (board[1][i] == 'x') {
				return X_WON;
			}
			if (board[1][i] == 'o') {
				return O_WON;
			}

		}

	}     
	int count = 0;
		for(int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++) {

				if (board[i][j] != '.') {

					count++; 
					
				}


			}
			if (count == 9) {

				return DRAW;


			}


  }



	
	

	return UNFINISHED;
}
/*********************************************************************
** Author: Tyler Forrester
** Function: print
** Description: Prints Board so players aren't playing Battleship.
*********************************************************************/


void Board::print()
{
	for (int i = 0; i < 3; i++) {
	
		std::cout << board[i][0] << " " << board[i][1] << " " << board[i][2] << endl;

		}
}


