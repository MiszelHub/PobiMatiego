#include "Motorower.h"

Motorower::Motorower(int numer, string producent, string model, float silnik) :Silnikowe(numer, producent, model, silnik)
{
	//ctor
}

Motorower::~Motorower()
{
	//dtor
}

void Motorower::obliczCeneBazow�()
{
	this->cena *= obliczModyfikatorPojemno�ciSilnika();
}