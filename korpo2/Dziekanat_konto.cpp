#include <iostream>
#include <string>
#include <fstream>
#include "Dziekanat_konto.h"
#include "Zadanie.h"
#include "Plan.h"

Dziekanat_konto_::Dziekanat_konto_()
{

}

void Dziekanat_konto_::zaloguj() {
	string a, b;
	cout << "Podaj index i haslo do Wirtualnego Dziekanatu:" << endl;
	while (a != Login || b != Haslo)
	{
		cout << "Index:";
		cin >> a;
		cout << "Haslo:";
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

void Dziekanat_konto_::pobierz_wydarzenia(Plan &P)
{
	fstream plik;
	plik.open("dziekanat.txt", ios::in);

	int i = Plan::rozmiar+1;
	if (plik.good())
	{

		while (plik.good())
		{
			Plan::rozmiar++;

			plik >> P.tab[i].nazwa;
			plik >> P.tab[i].data.rok;
			plik >> P.tab[i].data.miesiac;
			plik >> P.tab[i].data.dzien;
			plik >> P.tab[i].data.godzina;
			plik >> P.tab[i].data.minuta;
			plik >> P.tab[i].miejsce;
			P.tab[i].priorytet = 1;

			i++;

		}
	}
	plik.close();
	
}