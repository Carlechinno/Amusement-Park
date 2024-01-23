#define _CRT_SECURE_NO_WARNINGS
#include "Rides.h"
#include "Attractions.h"
#include <iostream>
using namespace std;


Rides::Rides() :Attractions(){
	this->_maxPeople = 0;
}


Rides::Rides(char* _nameOfAttraction ,int _maxPeople):Attractions(_nameOfAttraction) {
	this->_maxPeople = _maxPeople;
}


void Rides::print() {
	Attractions::print();
	cout << "the maximum amout of people that can get on the attraction is--> " << this->_maxPeople << endl;

}
