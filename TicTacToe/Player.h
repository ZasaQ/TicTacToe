#pragma once
#include <iostream>
#include <string>

class Player
{
	std::string name;
	char symbol;

public:

	Player(std::string name, char symbol)
	{
		this->name = name;
		this->symbol = symbol;
		std::cout << "Player: " << name << " with symbol: " << symbol << "\n";
	}

	std::string GetName();
	char GetSymbol();
};

