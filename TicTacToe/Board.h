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
	void CheckGameStatus(Player* PlayerToWin);

	void PickCell(Player* p);
	void SetGameStatus(GameStatus GivenGameStatus);
	GameStatus GetGameStatus() const;
	Cell* GetCell(int i) const;

	
	
};

