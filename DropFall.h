#pragma once
#include "Rides.h"
class DropFall : public Rides
{
private:
	int _dropHeight;
public:
	DropFall();
	DropFall(char* _nameOfAttraction, int _maxPeople,int _dropHeight);
	void print();
	friend ostream& operator << (ostream& os, const DropFall& other) {
		os << other._nameOfAttraction << "\nThe maximum amount of people is--> " << other._maxPeople << "\nthe height of the this dropfall is--> " << other._dropHeight << endl << endl;
		return os;
	}


};

