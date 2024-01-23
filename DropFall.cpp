#include "DropFall.h"
#include "Defines.h"



DropFall::DropFall() :Rides() {
	this->_dropHeight = 0;
}


DropFall::DropFall(char* _nameOfAttraction, int _maxPeople, int _dropHeight) :Rides(_nameOfAttraction, _maxPeople) {
	this->_dropHeight = _dropHeight;
}


void DropFall::print() {
	Rides::print();
	cout << "The drop height is--> " << this->_dropHeight << endl << endl;


}

