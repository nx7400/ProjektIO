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
	while (a != FB_konto_::Login)
	{
		cout << "Login:" << endl;
		cin >> a;
		if (a != Login)
		{
			cout << "Blad - niepoprawny login" << endl;
		}

	}

	while (b != FB_konto_::Haslo)
	{
		cout << "Haslo:" << endl;
		cin >> b;
		if (b != FB_konto_::Haslo)
		{
			cout << "Blad - niepoprawne haslo" << endl;
		}
	}

	cout << "Gratulacje zalogowales sie do FB!!!" << endl;
}

void FB_konto_::wyloguj() {
	// TODO - implement FB_konto ::wyloguj
	throw "Not yet implemented";
}

void FB_konto_::pobierz_wydarzenia()
{

}
