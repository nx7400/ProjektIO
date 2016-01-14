#include <iostream>
#include <fstream>
#include <string>
#include "Plan.h"
#include "Data.h"
#include "Zadanie.h"

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

	zapisz_do_pliku(Z);

}

void Plan::edytuj() {
	// TODO - implement Plan::edytuj
	throw "Not yet implemented";
}

void Plan::usun() {
	// TODO - implement Plan::usun
	throw "Not yet implemented";
}

void Plan::zapisz_do_pliku(Zadanie Z) {

	fstream plik2("plan.txt", ios::out | ios::app);
	plik2 << Z.nazwa << "	" << Z.data.rok << "	" << Z.data.miesiac << "	" << Z.data.dzien << "	" << Z.data.godzina << "	" << Z.data.minuta << "	" << Z.miejsce << "	" << Z.priorytet << endl;
	plik2.close();

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
