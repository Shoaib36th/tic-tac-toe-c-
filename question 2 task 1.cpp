#include<iostream>
using namespace std;
int main()
{
	char matrix[3][3] = { {'*','*','*'},{'*','*','*'},{'*','*','*'} }, player1, player2;
	int win = 0, row1, col1, row2, col2, p1 = 0, p2 = 0, win1=0, win2=0,tie=0;
	cout << "Welcome to tic tac toe Game:" << endl << endl << endl;
	
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix[i][j] << "  ";
			}
			cout <<endl<< endl;
		}
	cout << "\nChoose symbol (O or X) for player 1: ";
	cin >> player1;
	while (player1 != 'O' && player1 != 'X')
	{
		cout << "please try again for player 1: ";
		cin >> player1;
	}
	cout << "Choose symbol (O or X) for player 2: ";
	cin >> player2;
	while (player2 != 'O' && player2 != 'X'||player2==player1)
	{
		cout << "please try again for player 2: ";
		cin >> player2;
	}
	int count1=0,count2=0;
	for (int count = 0; win == 0; count++)
	{
		
		p1 = 0;
		for (int controller = 0; p1 == 0; controller++)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << matrix[i][j] << "  ";
				}
				cout<<endl << endl;
			}
			cout << "\nplayer 1: " << endl<<endl;
			cout << "Enter the number of row: ";
			cin >> row1;
			while (row1 > 3 ||row1<0)
			{
				cout << "Please! Enter in range,Enter the number of row: ";
				cin >> row1;
			}
			cout << "Enter the numbr of coulumn: ";
			cin >> col1;
			while (col1 >3 || col1<0)
			{
				cout << "Please! Enter in range,Enter the number of coulumn: ";
				cin >> col1;
			}
			if (matrix[row1 - 1][col1 - 1] != '*') {
				cout << "Already filled! Try again\n";
				continue;
			}
			matrix[row1 - 1][col1 - 1] = player1;
			count1++;
			if (count1 >= 3)
			{
				if (matrix[0][0] != '*' && matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
				{
					win = 1;
					win1++;
					break;
				}
				else if (matrix[0][0] != '*' && matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2])
				{
					win = 1;
					win1++;
					break;
				}
				else if (matrix[0][0] != '*' && matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0])
				{
					win = 1;
					win1++;
					break;
				}
				else if (matrix[0][1] != '*' && matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1])
				{
					win = 1;
					win1++;
					break;
				}
				else if (matrix[0][2] != '*' && matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2])
				{
					win = 1;
					win1++;
					break;
				}
				else if (matrix[1][0] != '*' && matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2])
				{
					win = 1;
					win1++;
					break;
				}
				else if (matrix[2][0] != '*' && matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2])
				{
					win = 1;
					win1++;
					break;
				}
				else if (matrix[0][2] != '*' && matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
				{
					win = 1;
					win1++;
					break;
				}
			}

			p1 = 1;

		} p2 = 0;
		if (count1 + count2 == 9)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (matrix[i][j] != '*')
						tie++;

				}
			}
		}
		if (tie >= 9)
			win = 1;


		
		for (int controller = 0; p2 == 0&&win==0; controller++)
		{
			
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << matrix[i][j] << "  ";
				}
				cout <<endl<< endl;
			}
			cout << "\nplayer 2: " << endl;
			cout << "\nEnter the number of row(1-3): ";
			cin >> row2;
			while (row2 > 3|| row2<0)
			{
				cout << "Please! Enter in range,Enter the number of row: ";
				cin >> row2;
			}
			
			cout << "Enter the numbr of coulumn(1-3): ";
			cin >> col2;
			while (col2>3 || col2<0)
			{
				cout << "Please! Enter in range,Enter the number of coulumn: ";
				cin >> col2;
			}
			if (matrix[row2 - 1][col2 - 1] != '*') {
				cout << "Already filled! Try again\n";
				continue;
			}
			matrix[row2 - 1][col2 - 1] = player2;
			count2++;
		
			if (count2 >= 3)
			{
				if (matrix[0][0] != '*' && matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
				{
					win = 1;
					win2++;
					break;
				}
				else if (matrix[0][0] != '*' && matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2])
				{
					win = 1;
					win2++;
					break;
				}
				else if (matrix[0][0] != '*' && matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0])
				{
					win = 1;
					win2++;
					break;
				}
				else if (matrix[0][1] != '*' && matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1])
				{
					win = 1;
					win2++;
					break;
				}
				else if (matrix[0][2] != '*' && matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2])
				{
					win = 1;
					win2++;
					break;
				}
				else if (matrix[1][0] != '*' && matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2])
				{
					win = 1;
					win2++;
					break;
				}
				else if (matrix[2][0] != '*' && matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2])
				{
					win = 1;
					win2++;
					break;
				}
				else if (matrix[0][2] != '*' && matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
				{
					win = 1;
					win2++;
					break;
				}
			}
			p2 = 1;
		}
		
			
		
		
	}
	

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix[i][j] << "  ";
			}
			cout <<endl<< endl;
		}
		cout << "Game finished......\nThe result is:" << endl;
	if (win1 != 0)
		cout << "player 1 win!";
	else if (win2 != 0)
		cout << "player 2 is win";
	else if (tie >= 9)
		cout << "tie";
	
	return 0;

}