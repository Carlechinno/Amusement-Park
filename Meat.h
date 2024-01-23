#pragma once
#include "Restaurants.h"
class Meat :virtual public Restaurants
{
protected:
    int _weight;
public:
    Meat() :Restaurants(), _weight(DEFAULT_VAL) {}
    Meat(char* _nameOfAttraction, char* _flagDish, int _weight) : Restaurants(_nameOfAttraction, _flagDish), _weight(_weight) {}
    virtual ~Meat() { cout << "Meat deleted\n"; }
    virtual void print();
    friend ostream& operator << (ostream& out, const Meat& meat);
};

