#pragma once
#include "Attractions.h"
class Rides :public Attractions
{
protected:
	int _maxPeople;
public:
	Rides();
	Rides(char* _nameOfAttraction, int _maxPeople);
	virtual void print() = 0;


};

