#include "Defines.h"
#include "AmusementPark.h"
#include"Includes.h"



AmusementPark::AmusementPark() {
	this->_park = nullptr;
	this->_sizeOfPark = 0;
}

AmusementPark::~AmusementPark() {
	cout << "!!!Destructor of Amusement park!!!" << endl;
	for (int i = 0; i < this->_sizeOfPark; i++) {
		delete this->_park[i];
	}
	delete[] this->_park;
}

void AmusementPark::menu() {
	cout << "WELCOME TO OUT AMUSEMENT PARK" << endl;

	char _name[NAME_SIZE];

	int _index;
	bool _again = true;
	int _choice = 0;

	while (_again) {
		cout << "Menu:\n1.Add an attraction\n2.Remove an attraction\n3.Search\n4.Extract(print a specific attarction)\n5.Print the entire park details\n6.exit" << endl << endl;
		cout << "Please choose an option from the menu--> ";
		cin >> _choice;
		switch (_choice) {
		case 1:
			cout << "\nYou chose to add an attration" << endl;
			this->addAttraction();
			break;
		case 2:
			cout << "\nYou chose to remove an attraction" << endl;
			cout << "Please enter the name of the attraction you want to remove--> ";
			cin >> _name;
			this->removeAttraction(_name);
			break;
		case 3:
			cout << "\nYou chose search" << endl;
			cout << "Please enter the name of the attraction you want to search for--> ";
			cin >> _name;
			if (this->search(_name, &_index)) {
				cout << _name << " does exists in the park" << endl;
			}
			else
				cout << _name << " does not exists in the park" << endl;
			break;
		case 4:
			cout << "\nYou chose extract" << endl;
			cout << "Please enter the name of the attraction you want to extract for--> ";
			cin >> _name;
			if (this->search(_name, &_index)) {
				this->extract(_index);
			}
			else
				cout << "There isnt an attraction with this name sorry" << endl;
			break;
		case 5:
			cout << "TA DAM\nTHE PARK:\n";
			for (int i = 0; i < this->_sizeOfPark; i++) {
				extract(i);
			}
			break;
		case 6:
			cout << "Thanks and goodbye\n";
			_again = false;
			break;
		default:
			system("cls");
			cout << "You entered a wrong choice you should've chosen between 1 to 6 try again please\n";
		}
	}


}


void AmusementPark::addAttraction() {
	enum attraction_type { addMeatRestaurant = 1, addDairyRestaurant, addNotKosherRestaurant, addDrop, addFerrisWheel, addFastTrain, addHighTrain, addGhostTrain };
	int attraction_type = DEFAULT_VAL;
	Attractions* newAttraction = nullptr;
	while (attraction_type != EXIT_OPTION)
	{
		cout << "Please choose one of the following options:\n" // Display options to user
			"==================================================================\n"
			"1 ) Add a meat restaurant to the park .\n"
			"2 ) Add a dairy restaurant to the park .\n"
			"3 ) Add a not kosher restaurant to the park .\n"
			"4 ) Add a dropfall to the park .\n"
			"5 ) Add a ferris wheel to the park .\n"
			"6 ) Add a fast train to the park .\n"
			"7 ) Add a height train to the park .\n"
			"8 ) Add a ghost train to the park .\n"
			" ==================================================================" << endl;
		cin >> attraction_type;
		cout << "enter the name of the attraction:\n";
		char name[NAME_SIZE];
		int index;
		cin >> name;
		if (search(name, &index))
		{
			cout << "This attraction already exists in the park, try again!\n";
			attraction_type = AGAIN_OPTION;
		}
		switch (attraction_type) {
		case addMeatRestaurant: {
			cout << "enter the name of the flag dish:\n";
			char flagDish[NAME_SIZE];
			cin >> flagDish;
			cout << "enter the weight of the meat in the dish:\n";
			int weight = DEFAULT_VAL;
			cin >> weight;
			newAttraction = new Meat(name, flagDish, weight);
			attraction_type = EXIT_OPTION;
			break;
		}
		case addDairyRestaurant: {
			cout << "enter the name of the flag dish:\n";
			char flagDish[NAME_SIZE];
			cin >> flagDish;
			cout << "Does the dish come with extra cheese?\n";
			bool withCheese = false;
			cin >> withCheese;
			newAttraction = new Dairy(name, flagDish, withCheese);
			attraction_type = EXIT_OPTION;
			break;
		}
		case addNotKosherRestaurant: {
			cout << "enter the name of the flag dish:\n";
			char flagDish[NAME_SIZE];
			cin >> flagDish;
			cout << "enter the weight of the meat in the dish:\n";
			int weight = DEFAULT_VAL;
			cin >> weight;
			cout << "Does the dish come with extra cheese?\n";
			bool withCheese = false;
			cin >> withCheese;
			newAttraction = new NotKosher(name, flagDish, weight, withCheese);
			attraction_type = EXIT_OPTION;
			break;
		}
		case addDrop: {
			int _dropHeight, _maxPeople;
			cout << "Please enter the height for this dropfall attraction:\n ";
			cin >> _dropHeight;
			cout << "Please enter the amount of people for this train:\n";
			cin >> _maxPeople;
			newAttraction = new DropFall(name, _maxPeople, _dropHeight);
			attraction_type = EXIT_OPTION;
			break;
		}
		case addFerrisWheel: {
			int _radius, _maxPeople;
			cout << "Please enter the radius for the wheel:\n ";
			cin >> _radius;
			cout << "Please enter the amount of people for this ride:\n";
			cin >> _maxPeople;
			newAttraction = new FerrisWheel(name, _maxPeople, _radius);
			attraction_type = EXIT_OPTION;
			break;
		}
		case addFastTrain: {
			int _speed, _maxPeople;
			cout << "Please enter the speed for the train:\n ";
			cin >> _speed;
			cout << "Please enter the amount of people for this train:\n";
			cin >> _maxPeople;
			newAttraction = new SpeedTrain(name, _maxPeople, _speed);
			attraction_type = EXIT_OPTION;
			break;
		}
		case addHighTrain: {
			int _maxHeight, _maxPeople;
			cout << "Please enter the maximum height for the train:\n ";
			cin >> _maxHeight;
			cout << "Please enter the amount of people for this train:\n";
			cin >> _maxPeople;
			newAttraction = new HeightTrain(name, _maxPeople, _maxHeight);
			attraction_type = EXIT_OPTION;
			break;
		}
		case addGhostTrain: {
			int _amountOfScares, _maxPeople, _scareLevel;
			char _scareName[NAME_SIZE];

			cout << "Please enter the amount of people for this train:\n";
			cin >> _maxPeople;

			cout << "Please enter the amount of scares for this train:\n ";
			cin >> _amountOfScares;
			Scare* _scare = new Scare[_amountOfScares];
			for (int i = 0; i < _amountOfScares; i++) {
				cout << "Please enter the name of the scare-->";
				cin >> _scareName;
				cout << "Please enter the scare level for this train:\n";
				cin >> _scareLevel;
				_scare[i].setNameOfScare(_scareName);
				_scare[i].setScareLevel(_scareLevel);
			}
			newAttraction = new GhostTrain(name, _maxPeople, _amountOfScares, _scare);
			attraction_type = EXIT_OPTION;
			break;
		}
		default: {
			cout << "wrong input, try again!" << endl;
			break;
		}
		}
	}

	Attractions** tempArr = new Attractions * [this->_sizeOfPark + 1];
	for (int i = DEFAULT_VAL; i < (this->_sizeOfPark); ++i) {
		tempArr[i] = this->_park[i];
	}
	tempArr[this->_sizeOfPark] = newAttraction;
	delete[] this->_park;
	this->_sizeOfPark++;
	this->_park = new Attractions * [this->_sizeOfPark];
	for (int i = DEFAULT_VAL; i < (this->_sizeOfPark); ++i) {
		this->_park[i] = tempArr[i];
	}
	delete[] tempArr;
}








bool AmusementPark::removeAttraction(char* name) {

	int _checkIndex;
	if (!(search(name, &_checkIndex))) {
		cout << endl << name << " DOESNT EXISTS IN THE PARK SO IT CANNOT BE REMOVED" << endl;
		return false;
	}

	Attractions** _tempArr = new Attractions * [this->_sizeOfPark];
	for (int i = 0; i < this->_sizeOfPark; i++) {
		_tempArr[i] = this->_park[i];
	}

	delete[] this->_park;
	this->_park = new Attractions * [this->_sizeOfPark - 1];
	for (int i = 0, j = 0; i < this->_sizeOfPark; i++) {
		if (i == _checkIndex) {
			continue;
		}
		this->_park[j] = _tempArr[i];
		j++;
	}
	this->_sizeOfPark--;

	delete[] _tempArr;

	return true;


}


bool AmusementPark::search(char* target, int* outIndex) {
	for (int i = 0; i < this->_sizeOfPark; i++) {
		if (strcmp(&this->_park[i]->getNameOfAttraction(), target) == DEFAULT_VAL) {
			*outIndex = i;
			return true;
		}
	}
	return false;
}

void AmusementPark::extract(int targetIndex) {
	if (dynamic_cast <SpeedTrain*> (this->_park[targetIndex]) != nullptr)
		cout << *((SpeedTrain*)this->_park[targetIndex]) << endl;
	else if (dynamic_cast <GhostTrain*> (this->_park[targetIndex]) != nullptr)
		cout << *((GhostTrain*)this->_park[targetIndex]) << endl;
	else if (dynamic_cast <HeightTrain*> (this->_park[targetIndex]) != nullptr)
		cout << *((HeightTrain*)this->_park[targetIndex]) << endl;
	else if (dynamic_cast <DropFall*> (this->_park[targetIndex]) != nullptr)
		cout << *((DropFall*)this->_park[targetIndex]) << endl;
	else if (dynamic_cast <FerrisWheel*> (this->_park[targetIndex]) != nullptr)
		cout << *((FerrisWheel*)this->_park[targetIndex]) << endl;
	else if (dynamic_cast <Restaurants*> (this->_park[targetIndex]) != nullptr)
		this->_park[targetIndex]->print();


}