#ifndef ikonto_h
#define ikonto_h

#include <string>
#include "Plan.h"
using namespace std;


class iKonto{

public:

	string Login;
	string Haslo;


	virtual void zaloguj() = 0;
	virtual void pobierz_wydarzenia(Plan &P) = 0;
	virtual void wyloguj() = 0;

	
};
#endif ikonto_h