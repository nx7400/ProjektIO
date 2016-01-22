#ifndef ikonto_h
#define ikonto_h

#include <string>
#include "Plan.h"
using namespace std;


class iKonto{

public:

	virtual void zaloguj() = 0; // funkcje wirtualne rozwijane w klasach dziedziczacych
	virtual void pobierz_wydarzenia(Plan &P) = 0; // funkcje wirtualne rozwijane w klasach dziedziczacych
	virtual void wyloguj() = 0;// funkcje wirtualne rozwijane w klasach dziedziczacych

	
};
#endif ikonto_h