/*********************************************************************
** Author: Tyler Forrester
** Date: 5/18/2016
** Description: Header file for Board
*********************************************************************/


#ifndef BOARD_HPP
#define BOARD_HPP
#include<iostream>

enum State { X_WON, O_WON, DRAW, UNFINISHED};
using namespace std; 
class Board{
 private: 
	char board[3][3];

public:
	    Board();
		bool makeMove(int a, int b, char whoseTurn);
		State gameState();
		void print(); 



};
#endif