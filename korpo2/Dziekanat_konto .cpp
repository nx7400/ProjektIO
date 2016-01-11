#include <iostream>
#include <string>
#include "Dziekanat_konto .h"

Dziekanat_konto_::Dziekanat_konto_()
{

}

void Dziekanat_konto_::zaloguj() {
	string a, b;
	cout << "Podaj index i haslo do Wirtualnego Dziekanatu:" << endl;
	while (a != Dziekanat_konto_::Login)
	{
		cout << "Index:" << endl;
		cin >> a;
		if (a != Login)
		{
			cout << "Blad - niepoprawny login" << endl;
		}

	}

	while (b != Dziekanat_konto_::Haslo)
	{
		cout << "Haslo:" << endl;
		cin >> b;
		if (b != Dziekanat_konto_::Haslo)
		{
			cout << "Blad - niepoprawne haslo" << endl;
		}
	}

	cout << "Gratulacje zalogowales sie do Wirtualnego Dziekanatu!!!" << endl;
}

void Dziekanat_konto_::wyloguj() {
	// TODO - implement Dziekanat_konto ::wyloguj
	throw "Not yet implemented";
}

void Dziekanat_konto_::pobierz_wydarzenia()
{

}