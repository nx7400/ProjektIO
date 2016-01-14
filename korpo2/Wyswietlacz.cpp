#include <iostream>
#include <string>
#include "Wyswietlacz.h"
#include "Plan.h"

void Wyswietlacz::wyswietl_menu(){
	int l = 0;

	Plan plan;

	while (l != 4)
	{
		cout << endl << endl << endl;
		cout << "		Menu:" << endl;
		cout << "	1)Przegladaj kalendarz" << endl;
		cout << "	2)Dodaj wydarzenie" << endl;
		cout << "	3)Szukaj polaczenia" << endl;
		cout << "	4)Wyloguj" << endl;
		cin >> l;
		if (l == 2)
		{
			plan.dodaj();
		}
		if (l == 1)
		{
			plan.wczytaj_z_pliku();
			wyswietl_plan(plan);
		}
		if (l == 3)
		{
			cout << "opcja nie jest jeszcze gotowa - przepraszamy za utrudnienia" << endl;
		}
		if (l == 4)
		{
			cout << "Dziekujemy za skorzystanie z aplikacji" << endl;
		}
	}


}

void Wyswietlacz::wyswietl_plan(Plan P) {

	for (int i = 0; i<P.rozmiar-1; i++)
	{
		cout << i + 1 << ")" << endl;
		cout << "Nazwa wydarzenia:";
		cout << P.tab[i].nazwa << endl;
		cout << "Data:";
		cout << P.tab[i].data.rok << "-";
		cout << P.tab[i].data.miesiac << "-";
		cout << P.tab[i].data.dzien << ", godzina: ";
		cout << P.tab[i].data.godzina << ":";
		cout << P.tab[i].data.minuta << endl;
		cout << "Miejsce:" << P.tab[i].miejsce << endl;
		cout << "Nadany priorytet:" << P.tab[i].priorytet << endl;
	}
}

void Wyswietlacz::wyswietl_przedzial() {
	// TODO - implement Wyswietlacz::wyswietl przedzial
	throw "Not yet implemented";
}

void Wyswietlacz::wyswietl_formularz_dodaj_wydarzenie() {
	// TODO - implement Wyswietlacz::wyswietl formularz dodaj wydarzenie
	throw "Not yet implemented";
}

void Wyswietlacz::wyswietl_formularz_edytuj_wydarznnie() {
	// TODO - implement Wyswietlacz::wyswietl formularz edytuj wydarznnie
	throw "Not yet implemented";
}

void Wyswietlacz::wyswietl_formularz_zaloguj() {
	// TODO - implement Wyswietlacz::wyswietl formularz zaloguj
	throw "Not yet implemented";
}
