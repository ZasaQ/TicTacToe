#include "Player.h"

Player::Player()
{
}

Player::Player(std::string name, CellStatus symbol)
{
	this->name = name;
	this->symbol = symbol;
}

void Player::InitFirstPlayer()
{
	std::string Name;
	char Symbol;
	bool bIsPlayerSet = false;

	printf("Player, choose your name and symbol (X/O)\nName: ");
	std::cin >> Name;

	while (bIsPlayerSet == false)
	{
		printf("Symbol: ");
		std::cin >> Symbol;

		if ((CellStatus)Symbol != CellStatus::O &&
			(CellStatus)Symbol != CellStatus::X)
		{
			printf("Wrong symbol, must be X or O\n");
			continue;
		}

		bIsPlayerSet = true;
	}

	SetName(Name);
	SetSymbol((CellStatus)Symbol);
}

void Player::InitSecondPlayer(Player* FirstPlayer)
{
	if (FirstPlayer == nullptr)
	{
		printf("First player hasn't been initialized!");
		return;
	}

	CellStatus FirstPlayerSymbol = FirstPlayer->GetSymbol();
	std::string Name;

	if (FirstPlayerSymbol == CellStatus::O)
		this->SetSymbol(CellStatus::X);
	else
		this->SetSymbol(CellStatus::O);

	printf("Second Player, your symbol is %c, please choose your name\nName:", this->GetSymbol());
	std::cin >> Name;

	this->SetName(Name);
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
