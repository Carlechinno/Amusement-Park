#include "Meat.h"
#include "Defines.h"

////////////////////////////
void Meat::print() {
    cout << "The name of the attraction is--> " << this->_nameOfAttraction << endl;
    cout << "The name of the flag dish is--> " << this->_flagDish << endl;
    cout << "The weight of the meat in the dish is--> " << this->_weight << endl << endl;
}

////////////////////////////
ostream& operator << (ostream& out, const Meat& meat) {
    out << "The name of the attraction is--> " << meat._nameOfAttraction << endl;
    out << "The name of the flag dish is--> " << meat._flagDish << endl;
    out << "The weight of the meat in the dish is--> " << meat._weight << endl;
    return out;
}