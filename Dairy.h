#pragma once
#include "Restaurants.h"
class Dairy : virtual public Restaurants
{
protected:
    bool _withCheese;
public:
    Dairy() : Restaurants(), _withCheese(false) {}
    Dairy(char* _nameOfAttraction, char* _flagDish, bool _withCheese) : Restaurants(_nameOfAttraction, _flagDish), _withCheese(_withCheese) {}
    virtual ~Dairy() { cout << "Dairy deleted\n"; }
    virtual void print();
    friend ostream& operator << (ostream& out, const Dairy& dairy);
};

