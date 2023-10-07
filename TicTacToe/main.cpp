#include <iostream>
#include "Board.h"
#include "Player.h"
#include "CellStatus.h"

using std::cin;
using std::cout;

int main()
{
	Board board;
	Player p1("p1", 'X');
	Player p2("p2", 'O');

	board.DrawBoard();

	while (board.GetGameStatus() == GameStatus::Playing)
	{

	}

	


	return 0;
}