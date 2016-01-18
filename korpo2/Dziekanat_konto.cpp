#include <iostream>
#include <string>
#include <fstream>
#include "Dziekanat_konto.h"
#include "Zadanie.h"

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

void Dziekanat_konto_::pobierz_wydarzenia()
{
	fstream plik;
	plik.open("dziekanat.txt", ios::in);
	Zadanie A;
	Zadanie tab[1000];
	int i = 0;
	if (plik.good())
	{

		while (plik.good())
		{

			plik >> A.nazwa;
			plik >> A.data.rok;
			plik >> A.data.miesiac;
			plik >> A.data.dzien;
			plik >> A.data.godzina;
			plik >> A.data.minuta;
			plik >> A.miejsce;
			A.priorytet = 1;;
			tab[i] = A;
			i++;

		}
	}
	plik.close();
	fstream plik2("plan.txt", ios::out | ios::app);
	if (plik2.good())
	{
		for (int j = 0; j<i; j++)
		{


			plik2 << tab[j].nazwa << "	" << tab[j].data.rok << "	" << tab[j].data.miesiac << "	" << tab[j].data.dzien << "	" << tab[j].data.godzina << "	" << tab[j].data.minuta << "	" << tab[j].miejsce << "	" << tab[j].priorytet << endl;


		}
	}

	plik2.close();
}