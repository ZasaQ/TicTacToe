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

void Board::CheckGameStatus(Player* PlayerToWin)
{
	for (int i = 0; i < 3; ++i) {
		if ((cells[i * 3]->GetStatus() == PlayerToWin->GetSymbol() && 
			cells[i * 3 + 1]->GetStatus() == PlayerToWin->GetSymbol() && 
			cells[i * 3 + 2]->GetStatus() == PlayerToWin->GetSymbol()))
		{
			this->SetGameStatus(GameStatus::Win);
			std::cout << "Player " << PlayerToWin->GetName() << " won!\n";
			return;
		}
	}

	// Check columns
	for (int i = 0; i < 3; ++i) {
		if ((cells[i]->GetStatus() == PlayerToWin->GetSymbol() &&
			cells[i + 3]->GetStatus() == PlayerToWin->GetSymbol() &&
			cells[i + 6]->GetStatus() == PlayerToWin->GetSymbol()))
		{
			this->SetGameStatus(GameStatus::Win);
			std::cout << "Player " << PlayerToWin->GetName() << " won!\n";
			return;
		}
	}

	// Check diagonals
	if ((cells[0]->GetStatus() == PlayerToWin->GetSymbol() &&
		cells[4]->GetStatus() == PlayerToWin->GetSymbol() &&
		cells[8]->GetStatus() == PlayerToWin->GetSymbol()) ||
		(cells[2]->GetStatus() == PlayerToWin->GetSymbol() &&
			cells[4]->GetStatus() == PlayerToWin->GetSymbol() &&
			cells[6]->GetStatus() == PlayerToWin->GetSymbol()))
	{
		this->SetGameStatus(GameStatus::Win);
		std::cout << "Player " << PlayerToWin->GetName() << " won!\n";
		return;
	}

	for (auto& InCell : cells)
	{
		if (!InCell->GetIsTaken())
			return;
	}

	this->SetGameStatus(GameStatus::Draw);
	std::cout << "Draw!" << std::endl;
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

void Board::SetGameStatus(GameStatus GivenGameStatus)
{
	inGameStatus = GivenGameStatus;
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


