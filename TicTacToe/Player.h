#pragma once
#include "Status.h"
#include <iostream>
#include <string>

class Player
{
	std::string name;
	Status symbol;

public:

	Player(std::string name, Status status)
	{
		this->name = name;
		this->symbol = status;
		std::cout << "Player: " << name << " with symbol: " << symbol;
	}

	char GetSymbol();
};

