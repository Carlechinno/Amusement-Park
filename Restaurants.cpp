#include "Restaurants.h"
#include "Defines.h"

Restaurants::Restaurants(char* _nameOfAttraction, char* _flagDish) : Attractions(_nameOfAttraction) {
	this->_flagDish = new char[strlen(_flagDish) + NULL_PLACE];
	strcpy(this->_flagDish, _flagDish);
}