#ifndef wyswietlacz_h
#define wyswietlacz_h
#include "Plan.h"

class Wyswietlacz {


public:
	Wyswietlacz();

	void wyswietl_menu(Plan &P); // wyswietla menu
	void wyswietl_plan(Plan &P); // wyswietla posortowany plan zadan
	void wyswietl_formularz_dodaj_wydarzenie(Plan &P); // wyswietla formularz w celu dodania wydarzenia
	void wyswietl_formularz_edytuj_wydarznnie(Plan &P); // wyswietla formularz w celu edycji wydarzenia
	void wyswietl_powiadomienia(Plan P); // wyswietla powiadomienia

};
#endif wyswietlacz_h