#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include "FB_konto.h"
#include "Zadanie.h"
#include "Plan.h"

FB_konto_::FB_konto_()
{

}

void FB_konto_::zaloguj() {
	string a, b;
	cout << "Podaj login i haslo do FB:" << endl;
	while (a != Login|| b != Haslo)
	{
		cout << "Login:";
		cin >> a;
		cout << "Haslo:";
		cin >> b;
		if (a != Login || b != Haslo)
		{
			cout << "Blad - niepoprawny login lub haslo!" << endl;
		}

	}

	zalogowanyFB = true;
	
	cout << "Gratulacje zalogowales sie do FB!!!" << endl<<endl;
}

void FB_konto_::wyloguj() {
	
	zalogowanyFB = false;
	cout << "Zostales poprawnie wylogowany z FB" << endl;


}

void FB_konto_::pobierz_wydarzenia(Plan &P)
{
	fstream plik;
	plik.open("FB_powiadomienia.txt", ios::in);

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
			plik >> P.tab[i].edytowalny;
			P.tab[i].priorytet = 2;
	
			i++;

		}
	}
	plik.close();

}