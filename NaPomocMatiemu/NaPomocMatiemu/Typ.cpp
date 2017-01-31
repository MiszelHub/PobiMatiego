#include "Typ.h"

Typ::Typ(std::string nazwaTypu) :jakiTyp(nazwaTypu)
{
	//ctor
}

Typ::~Typ()
{
	//dtor
}

double Typ::obliczRabat(double bilans)
{
	return 0.0;
}

void Typ::maxIloscWypozyczen()
{
}

std::string Typ::wyswietl()
{
	return this->jakiTyp;
}