#include "NotKosher.h"
////////////////////////////
void NotKosher::print() {
	cout << "The name of the attraction is--> " << this->_nameOfAttraction << endl;
	cout << "The name of the flag dish is--> " << this->_flagDish << endl;
	cout << "The weight of the meat in the dish is--> " << this->_weight << endl;
	if (this->_withCheese)
		cout << "The dish comes with extra cheese.\n\n";
	else cout << "The dish comes without extra cheese.\n\n";
}

////////////////////////////
ostream& operator << (ostream& out, const NotKosher& notKosher) {
	out << "The name of the attraction is--> " << notKosher._nameOfAttraction << endl;
	out << "The name of the flag dish is--> " << notKosher._flagDish << endl;
	out << "The weight of the meat in the dish is--> " << notKosher._weight << endl;
	if (notKosher._withCheese)
		out << "The dish comes with extra cheese.\n";
	else out << "The dish comes without extra cheese.\n";
	return out;
}