#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include "Zadanie.h"
#include "Wyswietlacz.h"
#include "FB_konto.h"
#include "GPS.h"
#include "GPS_Jak_dojade.h"
#include "Dziekanat_konto.h"
#include "iJak_Dojade.h"
#include "Plan.h"
#include "iKonto.h"
#include "Data.h"

using namespace std;

/** \mainpage Dokumentacja programu "Organizer"
*	Projekt koncowy - Inzynieria Oprogramowania
*
*	@author Michal Paszkowski
*	@author Damian Pucilowski 
*	@author Pawel Mazurek
*
*	Inzynieria Obliczeniowa
*
*/



int main()
{
	HANDLE G;

	G = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(G, FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	
	iKonto *wsk;

	FB_konto_ fbKonto; 
	Dziekanat_konto_ wdKonto;
	Wyswietlacz Wys;
	Plan P;

	wsk = &fbKonto;
	wsk->zaloguj();

	wsk = &wdKonto;
	wsk->zaloguj();
	
	if (fbKonto.zalogowanyFB == true && wdKonto.zalogowanyWD == true)
	{
		P.wczytaj_z_pliku();
		fbKonto.pobierz_wydarzenia(P);
		wdKonto.pobierz_wydarzenia(P);
		Wys.wyswietl_powiadomienia(P);
		Wys.wyswietl_menu(P);
	}
	
	wsk = &fbKonto;
	wsk->wyloguj();

	wsk = &wdKonto;
	wsk->wyloguj();

	P.zapisz_do_pliku();

	system("PAUSE");
}