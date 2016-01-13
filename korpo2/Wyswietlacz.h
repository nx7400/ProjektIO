#ifndef wyswietlacz_h
#define wyswietlacz_h
#include "Plan.h"

class Wyswietlacz {

private:
	int plan;

public:
	void wyswietl_menu();

	void wyswietl_plan(Plan);

	void wyswietl_przedzial();

	void wyswietl_formularz_dodaj_wydarzenie();

	void wyswietl_formularz_edytuj_wydarznnie();

	void wyswietl_formularz_zaloguj();
};
#endif wyswietlacz_h