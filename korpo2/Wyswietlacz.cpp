#include <iostream>
#include <string>
#include <Windows.h>
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

void Wyswietlacz::wyswietl_plan(Plan &P) {

	sortuj(P);


	for (int i = 1; i<Plan::rozmiar; i++)
	{
		cout <<"ID wydarzenia: " << i << ")" << endl;
		cout << "Nazwa wydarzenia:";
		cout << P.tab[i].nazwa << endl;
		cout << "Data:";
		cout << P.tab[i].data.rok << "-";
		cout << P.tab[i].data.miesiac << "-";
		cout << P.tab[i].data.dzien << ", godzina: ";
		cout << P.tab[i].data.godzina << ":"; 
		cout << P.tab[i].data.minuta << endl;
		cout << "Miejsce:" << P.tab[i].miejsce << endl;
		cout << "Nadany priorytet:" << P.tab[i].priorytet << endl<<endl;
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

	
	int id_wydarzenia;

start:
	cout << "Ktore wydarzenie chcesz edytowac: " << endl;
	wyswietl_plan(P);
	cout << "Podaj ID wydarzenia do edycji: ";
	cin >> id_wydarzenia;

	if (P.tab[id_wydarzenia].edytowalny == true)
	{
		P.edytuj(id_wydarzenia);
	}
	else
	{
		cout << "Nie mozesz edytowa� tego wydarzenia poniewaz nie Ty je utworzyles !!!" <<P.tab[id_wydarzenia].nazwa<< endl;
		goto start;
	}

}

void Wyswietlacz::wyswietl_powiadomienia(Plan P) {

	SYSTEMTIME T;
	GetLocalTime(&T);

	cout << endl << endl << endl << "Dzis jest " << T.wDay << "-" << T.wMonth << "-" << T.wYear << ", godzina" << T.wHour << ": " << T.wMinute << endl << endl;
	cout << "Wydarzenia na dzis: " << endl;

	bool w = false;

	for (int i = 0; i<(P.rozmiar - 1); i++)
	{
		if (P.tab[i].data.dzien == T.wDay && P.tab[i].data.miesiac == T.wMonth && T.wYear == P.tab[i].data.rok)
		{
			cout << P.tab[i].nazwa << ", miejsce: " << P.tab[i].miejsce << endl;
			w = true;
		}
	}
	if (w == false)
	{
		cout << "Brak planow na dzis" << endl;
	}

	cout << endl << endl;
	w = false;

	for (int i = 0; i<(P.rozmiar - 1); i++)
	{
		if (P.tab[i].priorytet == 1 && P.tab[i].data.dzien <= (T.wDay + 2) && P.tab[i].data.miesiac == T.wMonth && T.wYear == P.tab[i].data.rok)
		{
			if (w == false)
			{
				cout << "Pamietaj! W ciagu najblizszych 2 dni masz nastepujace wydarzenia oznaczone priorytetem 1: " << endl;
			}
			cout << P.tab[i].nazwa << ", miejsce: " << P.tab[i].miejsce << endl;
			w = true;
		}
	}

}

void Wyswietlacz::sortuj(Plan &P)
{
	Plan pom;
	for(int i = 0; i < Plan::rozmiar-1; i++)
	{
		for (int j = 0; j < Plan::rozmiar-i-1; j++)
		{
			if ( P.tab[j].data.rok > P.tab[j + 1].data.rok )
			{
				pom.tab[j] = P.tab[j];
				P.tab[j] = P.tab[j + 1];
				P.tab[j + 1] = pom.tab[j];
			}

			if (P.tab[j].data.rok == P.tab[j + 1].data.rok && P.tab[j].data.miesiac > P.tab[j + 1].data.miesiac)
			{
				pom.tab[j] = P.tab[j];
				P.tab[j] = P.tab[j + 1];
				P.tab[j + 1] = pom.tab[j];
			}

			if (P.tab[j].data.rok == P.tab[j + 1].data.rok && P.tab[j].data.miesiac == P.tab[j + 1].data.miesiac && P.tab[j].data.dzien > P.tab[j + 1].data.dzien)
			{
				pom.tab[j] = P.tab[j];
				P.tab[j] = P.tab[j + 1];
				P.tab[j + 1] = pom.tab[j];
			}

			if (P.tab[j].data.rok == P.tab[j + 1].data.rok && P.tab[j].data.miesiac == P.tab[j + 1].data.miesiac && P.tab[j].data.dzien == P.tab[j + 1].data.dzien && P.tab[j].data.godzina > P.tab[j + 1].data.godzina)
			{
				pom.tab[j] = P.tab[j];
				P.tab[j] = P.tab[j + 1];
				P.tab[j + 1] = pom.tab[j];
			}

			if (P.tab[j].data.rok == P.tab[j + 1].data.rok && P.tab[j].data.miesiac == P.tab[j + 1].data.miesiac && P.tab[j].data.dzien == P.tab[j + 1].data.dzien && P.tab[j].data.godzina == P.tab[j + 1].data.godzina && P.tab[j].data.minuta > P.tab[j + 1].data.minuta)
			{
				pom.tab[j] = P.tab[j];
				P.tab[j] = P.tab[j + 1];
				P.tab[j + 1] = pom.tab[j];
			}


		}
	}
}

void Wyswietlacz::wyswietl_formularz_zaloguj() {
	// TODO - implement Wyswietlacz::wyswietl formularz zaloguj
	throw "Not yet implemented";
}


