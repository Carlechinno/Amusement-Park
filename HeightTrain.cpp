#include "HeightTrain.h"
#include "Defines.h"


HeightTrain::HeightTrain() :Trains() {
	this->_height = 0;
}

HeightTrain::HeightTrain(char* _nameOfAttraction, int _maxPeople, int _height) :Trains(_nameOfAttraction, _maxPeople) {

	this->_height = _height;

}

void HeightTrain::print() {
	Trains::print();
	cout << "The height is--> " << this->_height << endl;
}