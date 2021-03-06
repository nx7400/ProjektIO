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
	friend class FB_konto_;
	friend class Dziekanat_konto_;

private:
	Data data;
	int priorytet;
	string miejsce;
	string nazwa;
	bool edytowalny; 
	

public:
	
	Zadanie(); // konstruktor domniemany
	Zadanie(Data D, string M, string N, int P,bool E); // konstruktor
};
#endif zadanie_h