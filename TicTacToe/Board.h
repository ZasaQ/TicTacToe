#pragma once

#include <iostream>
#include "Cell.h"
#include "Player.h"


class Board
{
	Cell* cells[9];

public:

	Board();

	void DrawBoard();
	void ChooseCell(Player p, int num);
	
	
};

