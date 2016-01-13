#include <iostream>
#include <string>
#include <ctime>
#include "Zadanie.h"
#include "Wyswietlacz.h"
#include "FB_konto .h"
#include "GPS .h"
#include "GPS_Jak_dojade .h"
#include "Dziekanat_konto .h"
#include "iJak_Dojade.h"
#include "Plan.h"
#include "iKonto.h"
#include "Data.h"

using namespace std;

int main()
{
	
	iKonto *wsk;

	FB_konto_ fbKonto; 
	Dziekanat_konto_ wdKonto; 

	wsk = &fbKonto;
	wsk->zaloguj();

	wsk = &wdKonto;
	wsk->zaloguj();
	cout << test github << endl; 

	//fbKonto.zaloguj();
	//wdKonto.zaloguj();

	system("PAUSE");
}