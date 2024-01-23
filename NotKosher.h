#pragma once
#include "Restaurants.h"
#include "Meat.h"
#include "Dairy.h"


class NotKosher :public Meat, public Dairy {
public:
    NotKosher() :Restaurants() {}
    NotKosher(char* _nameOfAttraction, char* _flagDish, int _weight, bool _withCheese) : Restaurants(_nameOfAttraction, _flagDish)
    {
        this->_weight = _weight; this->_withCheese = _withCheese;
    };
    virtual ~NotKosher() { cout << "not kosher deleted\n"; }
    virtual void print();
    friend ostream& operator << (ostream& out, const NotKosher& notKosher);
};
