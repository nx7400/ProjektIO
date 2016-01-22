#ifndef fb_h
#define fb_h
#include "iKonto.h"
#include "Plan.h"
#include <string>



class FB_konto_ : virtual public iKonto {

private: 
	 string Login = "grazyna@gmail.com";
	 string Haslo = "grazyna1234";
	
public:

	bool zalogowanyFB = false;
	
	FB_konto_(); 

	void zaloguj();// sprawdza zgodnosc loginu i hasla i ustawia flage zalogowanyFB w zaleznosci od powodzenia
	void wyloguj();// wylogowuje zalogowanego uzytkownika i ustawia flage zalogowanyFB na false
	void pobierz_wydarzenia(Plan &P); // wczytuje wydarzenia z pliku dziekanat.txt do tablicy z zadaniami
};
#endif fb_h
