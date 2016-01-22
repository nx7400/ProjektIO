
#ifndef dziekanat_h
#define dziekanat_h
#include "iKonto.h"
#include "Plan.h"

class Dziekanat_konto_ : virtual public iKonto {

private:
	string Login = "123456";
	string Haslo = "grazyna1234";
	

public:
	bool zalogowanyWD = false;

	Dziekanat_konto_(); 

	void zaloguj(); // sprawdza zgodnosc loginu i hasla i ustawia flage zalogowanyWD w zaleznosci od powodzenia
	void wyloguj(); // wylogowuje zalogowanego uzytkownika i ustawia flage zalogowanyWD na false
	void pobierz_wydarzenia(Plan &P); // wczytuje wydarzenia z pliku dziekanat.txt do tablicy z zadaniami

};
#endif dziekanat_h