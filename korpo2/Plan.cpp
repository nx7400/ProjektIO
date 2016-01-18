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

	Data Dat(d, m, r, g, min);
	Zadanie Z(Dat, miejsce, nazwa, p);

	tab[rozmiar] = Z;

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

	Data Dat(d, m, r, g, min);
	Zadanie Z(Dat, miejsce, nazwa, p);

	tab[id_wydarzenia] = Z;


}

void Plan::usun() {
	// TODO - implement Plan::usun
	throw "Not yet implemented";
}

void Plan::zapisz_do_pliku() {

	fstream plik2( "wydarzenia_uzytkownika.txt", ios::out | ios::app );
	for (int i = 0; i <rozmiar; i++)
	{
		plik2 << tab[i].nazwa << "	" << tab[i].data.rok << "	" << tab[i].data.miesiac << "	" << tab[i].data.dzien << "	" << tab[i].data.godzina << "	" << tab[i].data.minuta << "	" << tab[i].miejsce << "	" << tab[i].priorytet << endl;
	}
	
	plik2.close();

}

void Plan::wczytaj_z_pliku() {

	fstream plik;
	plik.open("wydarzenia_uzytkownika.txt", ios::in);
	rozmiar = 0;
	if (plik.good())
	{
		
		int i = rozmiar;
		while (plik.good())
		{
			rozmiar++;

			plik >> tab[i].nazwa;
			plik >> tab[i].data.rok;
			plik >> tab[i].data.miesiac;
			plik >> tab[i].data.dzien;
			plik >> tab[i].data.godzina;
			plik >> tab[i].data.minuta;
			plik >> tab[i].miejsce;
			plik >> tab[i].priorytet;
	
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
