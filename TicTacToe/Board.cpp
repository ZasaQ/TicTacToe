#include <iostream>
#include "Board.h"

Board::Board()
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cells[x][y] = new Cell(x, y);
		}
	}
}

void Board::DrawBoard()
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			printf("%c \t", cells[x][y]->GetStatus());
		}
		printf("\n");
	}
}
