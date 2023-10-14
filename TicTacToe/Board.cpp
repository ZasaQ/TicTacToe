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

void Board::PickCell(Player* p)
{
	int CellIndex;
	bool bPicked = false;

	while (bPicked == false)
	{
		std::cout << "\n" << p->GetName() << ", choose cell:";
		std::cin >> CellIndex;

		if (CellIndex < 0 || CellIndex > 8)
		{
			printf("There is no such cell!\n");
			continue;
		}

		if (!cells[CellIndex]->GetIsTaken())
		{
			cells[CellIndex]->SetIsTaken();
			cells[CellIndex]->SetStatus(p->GetSymbol());
			bPicked = true;
		}
		else
		{
			printf("\nThis Cell has been taken already");
		}
	}
	
}

GameStatus Board::GetGameStatus() const
{
	return this->inGameStatus;
}

Cell* Board::GetCell(int i) const
{
	if (i < 0 || i > 8)
		std::abort();

	return cells[i];
}


