#include "SpeedTrain.h"
#include "Trains.h"
#include "Defines.h"





SpeedTrain::SpeedTrain() :Trains() {
	this->_maxSpeed = 0;
}


SpeedTrain::SpeedTrain(char* _nameOfAttraction, int _maxPeople, int _maxSpeed) :Trains(_nameOfAttraction, _maxPeople) {
	this->_maxSpeed = _maxSpeed;


}


void SpeedTrain::print() {
	Trains::print();
	cout << "The maximum speed of the train is--> " << this->_maxSpeed << endl;


}