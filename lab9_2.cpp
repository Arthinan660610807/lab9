#include <iostream>
using namespace std;

void printO(int row, int col)
{
	if (row <= 0 || col <= 0)
	{
		cout << "Invalid input";
		return;
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "O";
		}
		cout << endl;
	}
}

