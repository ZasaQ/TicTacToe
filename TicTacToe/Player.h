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

	void InitPlayer();

	std::string GetName();
	CellStatus GetSymbol();

	void SetName(std::string GivenName);
	void SetSymbol(CellStatus GivenSymbol);
};

