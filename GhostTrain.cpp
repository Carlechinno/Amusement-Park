#include "GhostTrain.h"




GhostTrain::GhostTrain() :Trains() {
	this->_amountOfJumpScares = 0;
	this->_scare = nullptr;
}

GhostTrain::GhostTrain(char* _nameOfAttraction, int _maxPeople, int _amountOfJumpScares, Scare*& _scare) : Trains(_nameOfAttraction, _maxPeople) {
	this->_amountOfJumpScares = _amountOfJumpScares;
	this->_scare = _scare;
}

void GhostTrain::print() {
	Trains::print();
	cout << this->_scare << "The amount of jumpscares are--> " << this->_amountOfJumpScares << endl;
}