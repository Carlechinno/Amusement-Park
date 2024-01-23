#pragma once
#include "Rides.h"
class FerrisWheel :public Rides
{
private:
	float _radius;
public:
	FerrisWheel();
	FerrisWheel(char* _nameOfAttraction, int _maxPeople, int _radius);
	void print();
	friend ostream& operator << (ostream& os, const FerrisWheel& other) {
		os << other._nameOfAttraction << "\nThe maximum amount of people is--> " << other._maxPeople << "\nThe radius of this ferris wheel is-->" << other._radius << endl << endl;
		return os;
	}
};

