#ifndef ikonto_h
#define ikonto_h

#include <string>
using namespace std;


class iKonto{

public:

	string Login;
	string Haslo;

	//iKonto(string a="", string b="");

	virtual void zaloguj() = 0;
	virtual void pobierz_wydarzenia() = 0;
	virtual void wyloguj() = 0;

	
};
#endif ikonto_h