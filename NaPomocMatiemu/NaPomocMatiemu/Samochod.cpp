#include "Samochod.h"

Samochod::Samochod(int numer, string producent, string model, float silnik, char segment) :Silnikowe(numer, producent, model, silnik), segment(segment)
{
	//ctor
}

Samochod::~Samochod()
{
	//dtor
}