#include "Scare.h"
#include "Defines.h"
#define DEFAULT_VAL 0
#define NULL_PLACE 1




////////////////////////////
Scare::Scare(int _scareLevel, char* _nameOfScare) :_scareLevel(_scareLevel) {
	int size = strlen(_nameOfScare) + NULL_PLACE;
	this->_nameOfScare = new char[size];
	strcpy(this->_nameOfScare, _nameOfScare);
}

////////////////////////////
Scare::Scare(const Scare& other) :_scareLevel(other._scareLevel) {
	int size = strlen(other._nameOfScare) + NULL_PLACE;
	this->_nameOfScare = new char[size];
	strcpy(this->_nameOfScare, other._nameOfScare);
}

////////////////////////////
void Scare::setNameOfScare(char* _nameOfScare) {
	if (this->_nameOfScare) {
		if (strcmp(this->_nameOfScare, _nameOfScare) == DEFAULT_VAL)
			return;
		delete[] this->_nameOfScare;
	}

	int size = strlen(_nameOfScare) + NULL_PLACE;
	this->_nameOfScare = new char[size];
	strcpy(this->_nameOfScare, _nameOfScare);
}

////////////////////////////
ostream& operator << (ostream& out, const Scare& scare) {
	out << "\nName of scare: " << scare._nameOfScare << endl << "Scare level is: " << scare._scareLevel << endl;
	return out;
}



void Scare::operator=(Scare& other) {
	if (strcmp(this->_nameOfScare, other._nameOfScare) != 0) {
		delete[] this->_nameOfScare;
		this->_nameOfScare = new char[strlen(other._nameOfScare) + NULL_PLACE];
		strcpy(this->_nameOfScare, other._nameOfScare);
	}
	this->_scareLevel = other._scareLevel;

}


