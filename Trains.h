#pragma once
#include "Rides.h"
class Trains :public Rides
{
public:
	Trains();
	Trains(char* _nameOfAttraction, int _maxPeople);
	virtual void print() = 0;


};

