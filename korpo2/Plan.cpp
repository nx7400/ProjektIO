#include <iostream>
#include <fstream>
#include <string>
#include "Plan.h"
#include "Data.h"
#include "Zadanie.h"

void Plan::dodaj() {
	
	Data n;
	Zadanie z;
	int d, m, g, min, r, p;
	string miejsce, nazwa;
	fstream plik2("plan.txt", ios::out | ios::app);
	cout << "Data wydarzenia" << endl;
	cout << "Dzien:";
	cin >> d;
	cout << endl;
	cout << "Miesiac:";
	cin >> m;
	cout << endl;
	cout << "Godzina:";
	cin >> g;
	cout << ":";
	cin >> min;
	cout << endl;
	cout << "Rok:";
	cin >> r;
	cout << endl;
	cout << "Miejsce wydarzenia:";
	cin >> miejsce;
	cout << endl;
	cout << "Nazwa wydarzenia:";
	cin >> nazwa;
	cout << "Priorytet:";
	cin >> p;
	cout << endl;
	n.dzien = d; // czy to powinien tworzyc kostruktor Daty ?
	n.godzina = g; //
	n.miesiac = m; //
	n.rok = r; //
	n.minuta = min; //
	z.data = n; //
	z.miejsce = miejsce; // czy to powinien tworzyc konstruktor Zadania ?
	z.nazwa = nazwa; //
	z.priorytet = p; //
	plik2 << z.nazwa << "	" << n.rok << "	" << n.miesiac << "	" << n.dzien << "	" << n.godzina << "	" << n.minuta << "	" << miejsce << "	" << z.priorytet;
	plik2.close();

}

void Plan::edytuj() {
	// TODO - implement Plan::edytuj
	throw "Not yet implemented";
}

void Plan::usun() {
	// TODO - implement Plan::usun
	throw "Not yet implemented";
}

void Plan::zapisz_do_pliku() {
	// TODO - implement Plan::zapisz do pliku
	throw "Not yet implemented";
}

void Plan::wczytaj_z_pliku() {

	fstream plik;
	plik.open("plan.txt", ios::in);
	Plan::rozmiar = 0;
	if (plik.good())
	{
		Zadanie A;
		int i = 0;
		while (plik.good())
		{
			Plan::rozmiar++;
			plik >> A.nazwa;
			plik >> A.data.rok;
			plik >> A.data.miesiac;
			plik >> A.data.dzien;
			plik >> A.data.godzina;
			plik >> A.data.minuta;
			plik >> A.miejsce;
			plik >> A.priorytet;
			tab[i] = A;
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
