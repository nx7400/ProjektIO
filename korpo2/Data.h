#ifndef data_h
#define data_h

#include <windows.h> 
#include <iostream>
using namespace std;

class Data
{
public:
	int dzien;
	int miesiac;
	int rok; 
	int godzina;
	int minuta;
	static const int dni[];

	bool rok_przystepny(int r);
	bool koniec_miesiaca(int d);
	void dodaj_dni(int dni);
	void zwieksz_date();

	friend ostream & operator<<(ostream& str,Data t);

	Data();
	Data(int d,int m,int r, int g, int min);
	~Data();
};

#endif data_h