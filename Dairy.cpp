#include "Dairy.h"



////////////////////////////
void Dairy::print() {
	cout << "The name of the attraction is--> " << this->_nameOfAttraction << endl;
	cout << "The name of the flag dish is--> " << this->_flagDish << endl;
	if (this->_withCheese)
		cout << "The dish comes with extra cheese.\n\n";
	else cout << "The dish comes without extra cheese.\n\n";
}

////////////////////////////
ostream& operator << (ostream& out, const Dairy& dairy) {
	out << "The name of the attraction is--> " << dairy._nameOfAttraction << endl;
	out << "The name of the flag dish is--> " << dairy._flagDish << endl;
	if (dairy._withCheese)
		out << "The dish comes with extra cheese.\n";
	else out << "The dish comes without extra cheese.\n";
	return out;
}