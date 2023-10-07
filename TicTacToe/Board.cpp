#include "Board.h"


Board::Board()
{
	for (int x = 0; x < 9; x++)
		cells[x] = new Cell(x);
}

void Board::DrawBoard()
{
	printf("+-----------------------------------------------+\n");
	for (int x = 0; x < 9; x++)
	{
		if (cells[x]->GetStatus() == CellStatus::Empty)
			printf("|\t%d\t|", x);
		else
			printf("|\t%c\t|", cells[x]->GetStatus());

		if ((x + 1) % 3 == 0)
		{
			printf("\n");
			printf("+-----------------------------------------------+\n");

		}
	}

	printf("\n");
}

GameStatus Board::GetGameStatus()
{
	return this->inGameStatus;
}

Cell* Board::GetCell(int i)
{
	if (i < 0 || i > 8)
		std::abort();

	return cells[i];
}


