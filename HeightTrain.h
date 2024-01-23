#pragma once
#include "Trains.h"
class HeightTrain :public Trains
{
private:
	int _height;
public:
	HeightTrain();
	HeightTrain(char* _nameOfAttraction, int _maxPeople, int _height);
	void print();
	friend ostream& operator << (ostream& os, const HeightTrain& other) {
		os << other._nameOfAttraction << "\nThe maximum amount of people is--> " << other._maxPeople << "\nThe maximum height the train reaches is-->" << other._height << endl << endl;
		return os;
	}

};

