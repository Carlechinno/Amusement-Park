#define _CRT_SECURE_NO_WARNINGS
#include "Trains.h"
#include "Rides.h"
#include "Attractions.h"
#include <iostream>
using namespace std;





Trains::Trains() :Rides() {

}

Trains::Trains(char* _nameOfAttraction, int _maxPeople) :Rides(_nameOfAttraction, _maxPeople) {
}

void Trains::print() {
	Rides::print();

}