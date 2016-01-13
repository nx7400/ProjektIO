#ifndef plan_h
#define plan_h
#include "Zadanie.h"

class Plan {
	friend class Wyswietlacz;
private:
	//int lista_Zadan; //do zmiany w diagramach
	//int konta;

	int rozmiar;
	Zadanie tab[1000];
	int konta;


public:

	void dodaj();

	void edytuj();

	void usun();

	void zapisz_do_pliku();

	void wczytaj_z_pliku();

	void pobierz_zadanie();

	void zaloguj();
};
#endif plan_h