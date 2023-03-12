#pragma once

#include <iostream>
#include "Cell.h"
#include "Player.h"
#include <iomanip>


class Board
{
	Cell *cells[9];

public:

	Board();

	void DrawBoard();
	
	
};

