#pragma once

#include "CellStatus.h"

class Cell
{
	int position;
	bool bIsTaken;
	CellStatus status;

public:

	Cell(int position);

	int GetPosition();

	CellStatus GetStatus();
	char GetStatusInChar();

	bool GetIsTaken();

	void SetStatus(CellStatus status);
	void SetIsTaken();
};