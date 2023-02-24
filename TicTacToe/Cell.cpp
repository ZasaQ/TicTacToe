#include "Cell.h"
#include "Status.h"

Cell::Cell(int posX, int posY)
{
	this->posX = posX;
	this->posY = posY;
	this->status = Empty;
	this->bIsTaken = false;
}

int Cell::GetPosX()
{
	return posX;
}

int Cell::GetPosY()
{
	return posY;
}

Status Cell::GetStatus()
{
	return status;
}
