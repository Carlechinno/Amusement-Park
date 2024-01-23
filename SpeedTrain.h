#pragma once
#include "Trains.h"
class SpeedTrain : public Trains
{
private:
	int _maxSpeed;
public:
	SpeedTrain();
	SpeedTrain(char* _nameOfAttraction, int _maxPeople, int _maxSpeed);
	void print();
	friend ostream& operator << (ostream& os, const SpeedTrain& other) {
		os << other._nameOfAttraction << "\nThe maximum amount of people is--> " << other._maxPeople << "\nThe maximum speed this train reaches is-->" << other._maxSpeed << endl << endl;
		return os;
	}

};

