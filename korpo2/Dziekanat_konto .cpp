#include <iostream>
#include <string>
#include "Dziekanat_konto .h"

Dziekanat_konto_::Dziekanat_konto_()
{

}

void Dziekanat_konto_::zaloguj() {
	string a, b;
	cout << "Podaj index i haslo do Wirtualnego Dziekanatu:" << endl;
	while (a != Login || b != Haslo)
	{
		cout << "Index:" << endl;
		cin >> a;
		cout << "Haslo:" << endl;
		cin >> b;
		if (a != Login || b != Haslo)
		{
			cout << "Blad - niepoprawny login" << endl;
		}

	}

	zalogowanyWD = true;

	cout << "Gratulacje zalogowales sie do Wirtualnego Dziekanatu!!!" << endl;
}

void Dziekanat_konto_::wyloguj() {
	
	zalogowanyWD = false;
	cout << "Zostales poprawnie wylogowany z WD" << endl;
	
}

void Dziekanat_konto_::pobierz_wydarzenia()
{

}