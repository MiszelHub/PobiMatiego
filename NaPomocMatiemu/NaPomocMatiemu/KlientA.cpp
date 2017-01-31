#include "KlientA.h"

KlientA::KlientA(std::string nazwaTypu) :Typ(nazwaTypu)
{
	//ctor
}

KlientA::~KlientA()
{
	//dtor
}

double KlientA::obliczRabat(double bilans)
{
	return 0.05 * bilans;
}