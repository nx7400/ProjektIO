#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include "FB_konto.h"
#include "Zadanie.h"

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

void FB_konto_::pobierz_wydarzenia()
{
	fstream plik;
	plik.open("FB_powiadomienia.txt", ios::in);
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
			A.priorytet = 2;
			tab[i] = A;
			i++;

		}
	}
	plik.close();
	fstream plik2("plan.txt", ios::out);
	if (plik2.good())
	{
		for (int j = 0; j<i; j++)
		{


			plik2 << tab[j].nazwa << "	" << tab[j].data.rok << "	" << tab[j].data.miesiac << "	" << tab[j].data.dzien << "	" << tab[j].data.godzina << "	" << tab[j].data.minuta << "	" << tab[j].miejsce << "	" << tab[j].priorytet << endl;


		}
	}

	plik2.close();
}