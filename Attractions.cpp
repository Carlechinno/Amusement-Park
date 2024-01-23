#define _CRT_SECURE_NO_WARNINGS
#include "Attractions.h"
#include <iostream>
using namespace std;




Attractions::Attractions() {
	this->_nameOfAttraction = NULL;

}

Attractions::Attractions(char* _nameOfAttraction) {
	this->_nameOfAttraction = new char[strlen(_nameOfAttraction) + 1];
	strcpy(this->_nameOfAttraction, _nameOfAttraction);
}

Attractions::~Attractions() {
	cout << "Destroyed Attracion: " << this->_nameOfAttraction << endl;
	delete[] this->_nameOfAttraction;
}



void Attractions::print() {
	cout << "The name of the attraction is--> " << this->_nameOfAttraction << endl;
}