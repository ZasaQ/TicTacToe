#include "Player.h"

Player::Player()
{
}

Player::Player(std::string name, CellStatus symbol)
{
	this->name = name;
	this->symbol = symbol;
}

void Player::InitPlayer()
{
	std::string name;
	char symbol;

	printf("Player, choose your name and symbol (X/O)\nName: ");
	std::cin >> name;

	do
	{
		printf("Symbol: ");
		std::cin >> symbol;
		if ((CellStatus)symbol != CellStatus::O && (CellStatus)symbol != CellStatus::X)
			printf("Wrong symbol, must be X or O\n");
	} while ((CellStatus)symbol != CellStatus::O && (CellStatus)symbol != CellStatus::X);

	SetName(name);
	SetSymbol((CellStatus)symbol);
}

std::string Player::GetName()
{
    return name;
}

CellStatus Player::GetSymbol()
{
    return symbol;
}

void Player::SetName(std::string GivenName)
{
	this->name = GivenName;
}

void Player::SetSymbol(CellStatus GivenSymbol)
{
	this->symbol = GivenSymbol;
}
