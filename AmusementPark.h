#pragma once
#include "Defines.h"
#include "Includes.h"



class AmusementPark
{
private:
	Attractions** _park;
	int _sizeOfPark;
	void addAttraction();
	bool removeAttraction(char* name);//returns false if the attraction doesnt exists
	bool search(char* target, int* outIndex);
	void extract(int targetIndex);

public:
	AmusementPark();
	~AmusementPark();
	void menu();


};

