#pragma once
#include "Status.h"

class Cell
{
	int position;
	bool bIsTaken;
	Status status;

public:

	Cell(int position);

	int GetPosition();
	Status GetStatus();
	void SetStatus(Status status);
	void SetIsTaken();
};