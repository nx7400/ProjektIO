
#ifndef zadanie_h
#define zadanie_h

#include <iostream>
#include <string>
#include <ctime>
#include "Data.h"
using namespace std;

class Zadanie {

private:
	Data data;
	int przedzial_czasowy;
	int priorytet;
	string  miejsce;
};
#endif zadanie_h