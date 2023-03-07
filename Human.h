#include <iostream>
#include "Player.h"
#ifndef HUMAN_H
#define HUMAN_H


class Human : public Player
{
	public:
	Human();
	Human(std::string pname);
	std::string getName();
	char makeMove();
};

#endif