#include <iostream>
#include <fstream>
#include <string>
#include "Plan.h"
#include "Data.h"
#include "Zadanie.h"
#include "Dziekanat_konto.h"

int Plan::rozmiar = 0;


Plan::Plan(){

	for (int i = 0; i < 1000; i++)
	{
		tab[i].nazwa = "";
		tab[i].data.dzien = 0;
		tab[i].data.miesiac = 0;
		tab[i].data.godzina = 0;
		tab[i].data.minuta = 0;
		tab[i].data.rok = 0;
		tab[i].miejsce = "";
		tab[i].priorytet = 0;
		tab[i].edytowalny = true;

	}
	
}



void Plan::dodaj() {
	

	int d, m, g, min, r, p;
	string miejsce, nazwa;
	
	cout << "Data wydarzenia" << endl;
	cout << "Dzien:";
	cin >> d;
	
	cout << "Miesiac:";
	cin >> m;
	
	cout << "Dokladna godzina:";
	cin >> g;
	
	cin >> min;
	
	cout << "Rok:";
	cin >> r;
	
	cout << "Miejsce wydarzenia:";
	cin >> miejsce;
	
	cout << "Nazwa wydarzenia:";
	cin >> nazwa;
	cout << "Priorytet:";
	cin >> p;

	cout << endl;

	bool e = true;

	Data Dat(d, m, r, g, min);
	Zadanie Z(Dat, miejsce, nazwa, p,e);

	tab[Plan::rozmiar] = Z;

	Plan::rozmiar++;

}

void Plan::edytuj(int id_wydarzenia) {
	
	int d, m, g, min, r, p;
	string miejsce, nazwa;

	cout << "Data wydarzenia" << endl;
	cout << "Dzien:";
	cin >> d;

	cout << "Miesiac:";
	cin >> m;

	cout << "Dokladna godzina:";
	cin >> g;

	cin >> min;

	cout << "Rok:";
	cin >> r;

	cout << "Miejsce wydarzenia:";
	cin >> miejsce;

	cout << "Nazwa wydarzenia:";
	cin >> nazwa;

	cout << "Priorytet:";
	cin >> p;
	cout << endl;

	bool e = true;

	Data Dat(d, m, r, g, min);
	Zadanie Z(Dat, miejsce, nazwa, p,e);

	tab[id_wydarzenia-1] = Z;


}

void Plan::usun() {
	// TODO - implement Plan::usun
	throw "Not yet implemented";
}

void Plan::zapisz_do_pliku() {

	fstream plik2( "wydarzenia_uzytkownika.txt", ios::out );
	for (int i = 0; i <Plan::rozmiar; i++)
	{
		if (i == 0)
		{

			if (tab[i].edytowalny == true)
			{
				plik2 << tab[i].nazwa << "	" << tab[i].data.rok << "	" << tab[i].data.miesiac << "	" << tab[i].data.dzien << "	" << tab[i].data.godzina << "	" << tab[i].data.minuta << "	" << tab[i].miejsce << "	" << tab[i].priorytet << "	" << tab[i].edytowalny;
			}

		}

		else
		{
			if (tab[i].edytowalny == true)
			{
				plik2 << endl << tab[i].nazwa << "	" << tab[i].data.rok << "	" << tab[i].data.miesiac << "	" << tab[i].data.dzien << "	" << tab[i].data.godzina << "	" << tab[i].data.minuta << "	" << tab[i].miejsce << "	" << tab[i].priorytet << "	" << tab[i].edytowalny;
			}
		}


	}
	
	plik2.close();

}

void Plan::wczytaj_z_pliku() {

	fstream plik;
	plik.open("wydarzenia_uzytkownika.txt", ios::in);
	Plan::rozmiar = 0;
	if (plik.good())
	{
		
		int i = Plan::rozmiar;
		while (plik.good())
		{
			

			

			plik >> tab[i].nazwa;
			plik >> tab[i].data.rok;
			plik >> tab[i].data.miesiac;
			plik >> tab[i].data.dzien;
			plik >> tab[i].data.godzina;
			plik >> tab[i].data.minuta;
			plik >> tab[i].miejsce;
			plik >> tab[i].priorytet;
			plik >> tab[i].edytowalny;

			Plan::rozmiar++;
			i++;
		}
	}
	else
		cout << "brak wydarzen do wyswietlenia" << endl;
	plik.close();
	
	
}

void Plan::pobierz_zadanie() {
	// TODO - implement Plan::pobierz zadanie
	throw "Not yet implemented";
}

void Plan::zaloguj() {
	// TODO - implement Plan::zaloguj
	throw "Not yet implemented";
}
