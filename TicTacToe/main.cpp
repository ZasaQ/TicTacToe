#include <iostream>
#include "Board.h"
#include "Player.h"
#include "CellStatus.h"

using std::cin;
using std::cout;

int main()
{
	Board board;
	Player* p1 = new Player("p1", CellStatus::X);
	Player* p2 = new Player("p2", CellStatus::O);

	while (board.GetGameStatus() == GameStatus::Playing)
	{
		board.DrawBoard();
		board.PickCell(p1);
		board.DrawBoard();
		board.PickCell(p2);

		//break;
	}

	


	return 0;
}