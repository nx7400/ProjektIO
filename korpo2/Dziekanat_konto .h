
#ifndef dziekanat_h
#define dziekanat_h
#include "iKonto.h"

class Dziekanat_konto_ : virtual public iKonto {

private:
	string Login = "123456";
	string Haslo = "grazyna1234";
	bool zalogowanyWD = false;

public:

	Dziekanat_konto_(); //zaimplemntowac mozliwosc dodania nowego uzytkownika

	void zaloguj();
	void wyloguj();
	void pobierz_wydarzenia();

};
#endif dziekanat_h