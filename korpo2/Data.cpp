#include "Data.h"

const int Data::dni[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Data::Data(int d,int m,int r,int g, int min)
{
	SYSTEMTIME T;
	GetLocalTime(&T);
	

	dzien = d;
	miesiac = m;
	rok = r;
	godzina = g;
	minuta = min;
}

Data::Data()
{
	SYSTEMTIME T;
	GetLocalTime(&T);

	dzien = T.wDay;
	miesiac = T.wMonth;
	rok = T.wYear;
	godzina = T.wHour;
	minuta = T.wMinute;

}

Data::~Data()
{
}

bool Data::rok_przystepny(int r)
{
	if (r % 400 == 0 || (r % 100 != 0 && r % 4 == 0))
		return true;
	else
		return false;
}

bool Data::koniec_miesiaca(int d)
{
	if (miesiac == 2 && rok_przystepny(rok))
		return d == 29;
	else
		return d == dni[miesiac];
}

void Data::dodaj_dni(int d)
{
	for (int i = 0; i < d; i++)
	{
		zwieksz_date();
	}

}

void Data::zwieksz_date()
{
	if (!koniec_miesiaca(dzien))
		++dzien;
	else
	{
		if (miesiac < 12)
		{
			++miesiac;
			dzien = 1;
		}
		else
		{
			++rok;
			miesiac = 1;
			dzien = 1;
		}
	}

}

