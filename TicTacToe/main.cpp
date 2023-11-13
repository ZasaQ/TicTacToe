#include <iostream>
#include "Board.h"
#include "Player.h"
#include "CellStatus.h"

int main()
{
	Board board;
	Player* player1 = new Player();
	Player* player2 = new Player();

	player1->InitFirstPlayer();
	std::cout << std::endl;
	player2->InitSecondPlayer(player1);

	board.DrawBoard();

	while (1)
	{
		board.PickCell(player1);
		board.DrawBoard();
		board.CheckGameStatus(player1);

		if (board.GetGameStatus() != GameStatus::Playing)
			break;

		board.PickCell(player2);
		board.DrawBoard();
		board.CheckGameStatus(player2);

		if (board.GetGameStatus() != GameStatus::Playing)
			break;
	}

	return 0;
}