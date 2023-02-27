#include <iostream>
#include "Board.h"
#include "Player.h"
#include "Status.h"

int main()
{
	Board b;
	std::string name;
	char status;

	std::cout << "Choose name and symbol: ";
	std::cin >> name;
	std::cin >> status;

	Player p1(name, status);

	return 0;
}