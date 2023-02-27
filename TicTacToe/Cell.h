#pragma once
#include "Status.h"

class Cell
{
	int posX, posY;
	bool bIsTaken;
	Status status;

public:

	Cell(int posX, int posY);

	int GetPosX();
	int GetPosY();
	Status GetStatus();
};

