#pragma once

#include <iostream>
#include "CellStatus.h"
#include <string>

class Player
{
	std::string name;
	CellStatus symbol;

public:
	Player();
	Player(std::string name, CellStatus symbol);

	void InitFirstPlayer();
	void InitSecondPlayer(Player* FirstPlayer);

	std::string GetName();
	CellStatus GetSymbol();

	void SetName(std::string GivenName);
	void SetSymbol(CellStatus GivenSymbol);
};

