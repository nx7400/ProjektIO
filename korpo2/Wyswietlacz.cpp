#include <iostream>
#include <string>
#include "Wyswietlacz.h"
#include "Plan.h"

Wyswietlacz::Wyswietlacz(){

}

void Wyswietlacz::wyswietl_menu(Plan &P){
	int l = 0;


	while (l != 5)
	{
		cout << endl << endl << endl;
		cout << "		Menu:" << endl;
		cout << "	1)Przegladaj kalendarz" << endl;
		cout << "	2)Dodaj wydarzenie" << endl;
		cout << "	3)Edytuj wydarzenie" << endl;
		cout << "	4)Szukaj polaczenia" << endl;
		cout << "	5)Wyloguj" << endl;
		cin >> l;

		if (l == 2)
		{
			wyswietl_formularz_dodaj_wydarzenie(P);
		}

		if (l == 1)
		{
			wyswietl_plan(P);
		}

		if (l == 3)
		{
			wyswietl_formularz_edytuj_wydarznnie(P);
		}

		if (l == 4)
		{
			cout << "opcja nie jest jeszcze gotowa - przepraszamy za utrudnienia" << endl;
		}

		if (l == 5)
		{
			cout << "Dziekujemy za skorzystanie z aplikacji" << endl;
		}

	}


}

void Wyswietlacz::wyswietl_plan(Plan P) {



	for (int i = 0; i<Plan::rozmiar; i++)
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

void Wyswietlacz::wyswietl_formularz_dodaj_wydarzenie(Plan &P) {
	
	P.dodaj();
}

void Wyswietlacz::wyswietl_formularz_edytuj_wydarznnie(Plan &P) {

	//P.wczytaj_z_pliku();
	
	int id_wydarzenia;

	cout << "Ktore wydarzenie chcesz edytowac: " << endl;
	wyswietl_plan(P);
	cout << "Podaj ID wydarzenia do edycji: ";
	cin >> id_wydarzenia;
	P.edytuj(id_wydarzenia);

}

void Wyswietlacz::wyswietl_formularz_zaloguj() {
	// TODO - implement Wyswietlacz::wyswietl formularz zaloguj
	throw "Not yet implemented";
}
