#include "Board.h"
#include <iostream>

Board::Board()
{
	int temp = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			this->cells[i][j] = j + 1 + temp;
		}
		temp += 3;
	}
}

void Board::WriteCells()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << this->cells[i][j];
		}
		std::cout << std::endl;
	}	
}
