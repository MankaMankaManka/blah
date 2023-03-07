#include <iostream>
#include "Player.h"
#ifndef REFEREE_H
#define REFEREE_H
class Computer : public Player
{
	public:
	Computer();
	std::string getName();
	char makeMove();
};

#endif