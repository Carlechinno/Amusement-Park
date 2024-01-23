#include "FerrisWheel.h"
#include "Defines.h"



FerrisWheel::FerrisWheel() :Rides() {
	this->_radius = 0;
}


FerrisWheel::FerrisWheel(char* _nameOfAttraction, int _maxPeople, int _radius) :Rides(_nameOfAttraction, _maxPeople) {
	this->_radius = _radius;

}


void FerrisWheel::print() {
	Rides::print();
	cout << "The radius of this ferris wheel is--> " << this->_radius << endl;

}