#pragma once
#include "Defines.h"
class Attractions
{
protected:
	char* _nameOfAttraction;
public:
	Attractions();
	Attractions(char* _nameOfAttraction);
	virtual ~Attractions();
	virtual void print() = 0;
	const char& getNameOfAttraction() { return *this->_nameOfAttraction; }
	friend ostream& operator << (ostream& out, const Attractions& attraction) {
		out << "The name of the attraction is--> " << attraction._nameOfAttraction << endl;
		return out;
	}
};

