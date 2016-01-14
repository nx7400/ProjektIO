#include <string>
#include "Zadanie.h"

Zadanie::Zadanie(){

}

Zadanie::Zadanie(Data D, string N, string M, int P)
{
	data = D;
	nazwa = N;
	miejsce = M;
	priorytet = P;
}