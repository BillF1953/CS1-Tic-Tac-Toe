/*********************************************************************
** Author: Tyler Forrester
** Date: 4/29/2016
** Description: TicTacToe Game Header File
*********************************************************************/




#ifndef TicTacToe_HPP
#define TicTacToe_HPP

#include "Board.hpp"

class TicTacToe {

private: 
	Board bo; 
	char whoseTurn; 

public:

	TicTacToe(char);
	string Play(); 

    


};

#endif