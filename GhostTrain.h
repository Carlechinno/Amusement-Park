#pragma once
#include "Trains.h"
#include "Scare.h"
class GhostTrain :public Trains
{
private:
	int _amountOfJumpScares;
	Scare* _scare;

public:
	GhostTrain();
	GhostTrain(char* _nameOfAttraction, int _maxPeople, int _amountOfJumpScares, Scare*& _scare);
	void print();
	friend ostream& operator << (ostream& os, const GhostTrain& other) {
		os << other._nameOfAttraction << "\nThe maximum amount of people is--> " << other._maxPeople << endl;
		for (int i = 0; i < other._amountOfJumpScares; i++) {
			os << "Name of fear " << i + 1 << " --> " << other._scare[i] << endl;
		}
		os << endl;
		return os;
	}
};

