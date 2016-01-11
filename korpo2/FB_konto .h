#ifndef fb_h
#define fb_h
#include "iKonto.h"
#include <string>



class FB_konto_ : virtual public iKonto {

private: 
	 string Login = "grazyna@gmail.com";
	 string Haslo = "grazyna1234";

public:

	FB_konto_(); //zaimplementowac mozliwosc dodania nowego uzytkownika

	void zaloguj();
	void wyloguj();
	void pobierz_wydarzenia(); 
};
#endif fb_h