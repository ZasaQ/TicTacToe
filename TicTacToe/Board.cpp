#include "Board.h"

Board::Board()
{
	for (int x = 0; x < 9; x++)
	{
		cells[x] = new Cell(x);
	}
}

void Board::DrawBoard()
{
	for (int x = 0; x < 9; x++)
	{
		printf("\t%c\t|", cells[x]->GetStatus());
		if ((x + 1) % 3 == 0) printf("\n");
	}
}
