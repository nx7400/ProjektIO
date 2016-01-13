#include <iostream>
#include <string>
#include <ctime>
#include "FB_konto .h"

FB_konto_::FB_konto_()
{

}

void FB_konto_::zaloguj() {
	string a, b;
	cout << "Podaj login i haslo do FB:" << endl;
	while (a != Login|| b != Haslo)
	{
		cout << "Login:" << endl;
		cin >> a;
		cout << "Haslo:" << endl;
		cin >> b;
		if (a != Login || b != Haslo)
		{
			cout << "Blad - niepoprawny login lub haslo!" << endl;
		}

	}

	zalogowanyFB = true;
	
	cout << "Gratulacje zalogowales sie do FB!!!" << endl;
}

void FB_konto_::wyloguj() {
	
	zalogowanyFB = false;
	cout << "Zostales poprawnie wylogowany z FB" << endl;


}

void FB_konto_::pobierz_wydarzenia()
{

}
