/*
	Check to see how many possible wins and ties there are in tic tac toe
	April 2022
	Andrew Tesla
	C++
*/

#include <iostream>

using namespace std;

int main(void){
	char board[3][3];
	int turn = 1;
	int xWin = 0;
	int oWin = 0;
	int ties = 0;
	int games = 0;

	while(){	//check to see if x's last turn is played	//9th move is (3,3)

	}

	if(board[x][y] == 'x'){		//make sure that x's are not overridden

	}
	if(board[x][y] == 'o'){		//make sure that o's are not overridden

	}

	if(	((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) ||	//TL-BR
		((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) ||	//TR-BL
		((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) ||	//col 1
		((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) ||	//col 2
		((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) ||	//col 3
		((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) ||	//row 1
		((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) ||	//row 2
		((board[0][2] == board[1][2]) && (board[1][2] == board[2][2]))		//row 3
	){
		if(turn % 2){
			xWin++;
		}
		else{
			oWin++;
		}
	}

	cout<<"Games played: "<<games<<endl;
	cout<<"X games won: "<<xWin<<endl;
	cout<<"O games won: "<<oWin<<endl;
	cout<<"Ties: "<<ties<<endl;

	return 0;
}
