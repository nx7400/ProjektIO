#ifndef wyswietlacz_h
#define wyswietlacz_h
#include "Plan.h"

class Wyswietlacz {


public:
	Wyswietlacz();

	void wyswietl_menu(Plan &P);
	void wyswietl_plan(Plan &P);
	void wyswietl_przedzial();
	void wyswietl_formularz_dodaj_wydarzenie(Plan &P);
	void wyswietl_formularz_edytuj_wydarznnie(Plan &P);
	void wyswietl_formularz_zaloguj();
	void wyswietl_powiadomienia(Plan P);
	void sortuj(Plan &P);

};
#endif wyswietlacz_h