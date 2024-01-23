#pragma once
#include "Attractions.h"
class Restaurants :public Attractions
{
protected:
    char* _flagDish;
public:
    Restaurants() :Attractions(), _flagDish(nullptr) {}
    Restaurants(char* _nameOfAttraction, char* _flagDish);
    virtual ~Restaurants() { delete[] this->_flagDish; cout << "restaurant deleted\n"; }
    virtual void print() = 0;
};

