#pragma once
#include "Status.h"
#include <iostream>
#include <string>

class Player
{
	std::string name;
	Status status;


public:

	Player(std::string name, Status status)
	{
		this->name = name;
		this->status = status;
		printf("Player: %s with %c \n", *name, status);
	}
};

