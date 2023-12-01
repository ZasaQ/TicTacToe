#include "../HeaderFiles/Cell.h"

Cell::Cell(int position)
{
	this->position = position;
	this->bIsTaken = false;
	this->status = CellStatus::Empty;
}

int Cell::GetPosition()
{
	return position;
}

CellStatus Cell::GetStatus()
{
	return status;
}

char Cell::GetStatusInChar()
{
	return (char)status;
}

bool Cell::GetIsTaken()
{
	return GetStatus() != CellStatus::Empty;
}

void Cell::SetStatus(CellStatus status)
{
	this->status = status;
}

void Cell::SetIsTaken()
{
	bIsTaken = true;
}
