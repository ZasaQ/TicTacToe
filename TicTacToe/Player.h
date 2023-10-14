#pragma once

#include <iostream>
#include "CellStatus.h"
#include <string>

class Player
{
	std::string name;
	CellStatus symbol;

public:

	Player(std::string name, CellStatus symbol)
	{
		this->name = name;
		this->symbol = symbol;
		std::cout << "Player: " << name << " with symbol: " << (char)symbol << "\n";
	}

	std::string GetName();
	CellStatus GetSymbol();
};

