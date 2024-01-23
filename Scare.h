#define DEFAULT_VAL 0
#define NULL_PLACE 1
#include "Defines.h"

class Scare {
private:
    int _scareLevel;
    char* _nameOfScare;
public:
    Scare() :_scareLevel(DEFAULT_VAL), _nameOfScare(nullptr) {}
    Scare(int _scareLevel, char* _nameOfScare);
    Scare(const Scare& other);
    ~Scare() { delete[] this->_nameOfScare; cout << "scare deleted\n"; }
    void setScareLevel(int _scareLevel) { this->_scareLevel = _scareLevel; }
    void setNameOfScare(char* _nameOfScare);
    int getScareLevel() const { return this->_scareLevel; }
    const char& getNameOfScare() { return *this->_nameOfScare; }
    friend ostream& operator << (ostream& out, const Scare& scare);
    void operator=(Scare& other);
};

