#ifndef plan_h
#define plan_h
#include "Zadanie.h"

class Plan {
	friend class Wyswietlacz;
	
public:

	static int rozmiar;
	Zadanie tab[1000];

	Plan();
	
	void dodaj(); // dodaje zadanie do istniejacej tablicy
	void edytuj(int id_wydarzenia); // edytuje istniejace wydarzenie na tablicy
	void usun(); // usuwa wydarzenie
	void zapisz_do_pliku(); // zapisuje tablice zadan do pliku
	void wczytaj_z_pliku(); // wczytuje tablice zadan do pliku
	void sortuj(); // sortuje wydarzenia wg daty
};
#endif plan_h