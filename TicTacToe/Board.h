#pragma once

#include <iostream>
#include "Cell.h"
#include "Player.h"
#include "GameStatus.h"
#include <iomanip>

class Board
{
	Cell *cells[9];
	GameStatus inGameStatus = GameStatus::Playing;

public:

	Board();

	void DrawBoard();

	void PickCell(Player* p);
	GameStatus GetGameStatus() const;
	Cell* GetCell(int i) const;

	
	
};

