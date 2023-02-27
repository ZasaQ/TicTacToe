#include "Cell.h"

Cell::Cell(int position)
{
	this->position = position;
	this->status = Status::Empty;
	this->bIsTaken = false;
}

int Cell::GetPosition()
{
	return position;
}

Status Cell::GetStatus()
{
	return status;
}

void Cell::SetStatus(Status status)
{
	this->status = status;
}

void Cell::SetIsTaken()
{
	this->bIsTaken = true;
}
