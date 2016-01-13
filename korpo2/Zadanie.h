#ifndef zadanie_h
#define zadanie_h

#include <iostream>
#include <string>
#include <ctime>
#include "Data.h"

using namespace std;

class Zadanie {

	friend class Plan;
	friend class Wyswietlacz;
private:
	Data data;
	int przedzial_czasowy;
	int priorytet;
	string miejsce;
	string nazwa;
};
#endif zadanie_h