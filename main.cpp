#include "TicTacToe.hpp"
#include <string>

int main() {

	char turn;

	cout << "Whose turn is it, 'x' or 'o' ?" << endl;
	cin  >> turn; 

	TicTacToe tic = TicTacToe(turn); 
    string win= tic.Play(); 

		
	cout << win << endl; 
	 


	return 0; 
}