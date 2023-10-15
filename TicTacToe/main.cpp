#include <iostream>
#include "Board.h"
#include "Player.h"
#include "CellStatus.h"

using std::cin;
using std::cout;

int main()
{
	Board board;
	Player* player1 = new Player();
	Player* player2 = new Player();

	player1->InitPlayer();
	player2->InitPlayer();

	while (board.GetGameStatus() == GameStatus::Playing)
	{
		board.DrawBoard();
		board.PickCell(player1);
		board.DrawBoard();
		board.PickCell(player2);

		//break;
	}

	


	return 0;
}