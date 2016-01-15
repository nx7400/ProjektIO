#include <string>
#include "Zadanie.h"

Zadanie::Zadanie(){

}

Zadanie::Zadanie(Data D, string M, string N, int P)
{
	data = D;
	miejsce = M;
	nazwa = N;
	priorytet = P;
}