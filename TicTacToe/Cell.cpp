#include "Cell.h"

Cell::Cell(int position)
{
	this->position = position;
	this->bIsTaken = false;
	this->status = Status::Empty;
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
	bIsTaken = true;
}
