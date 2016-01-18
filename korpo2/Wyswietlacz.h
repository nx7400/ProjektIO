#ifndef wyswietlacz_h
#define wyswietlacz_h
#include "Plan.h"

class Wyswietlacz {

private:
	int plan;

public:
	Wyswietlacz();

	void wyswietl_menu(Plan P);

	void wyswietl_plan(Plan P);

	void wyswietl_przedzial();

	void wyswietl_formularz_dodaj_wydarzenie(Plan P);

	void wyswietl_formularz_edytuj_wydarznnie(Plan P);

	void wyswietl_formularz_zaloguj();
};
#endif wyswietlacz_h