#ifndef plan_h
#define plan_h
#include "Zadanie.h"

class Plan {
	friend class Wyswietlacz;
	
public:

	static int rozmiar;
	Zadanie tab[1000];

	Plan();
	
	void dodaj();
	void edytuj(int id_wydarzenia);
	void usun();
	void zapisz_do_pliku();
	void wczytaj_z_pliku();
	void pobierz_zadanie();
	void zaloguj();
};
#endif plan_h