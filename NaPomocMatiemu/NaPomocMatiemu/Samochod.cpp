#include "Samochod.h"

Samochod::Samochod(int numer, string producent, string model, float silnik, char segment) :Silnikowe(numer, producent, model, silnik), segment(segment)
{
	//ctor
}

Samochod::~Samochod()
{
	//dtor
}

double Samochod::ObliczmodyfikatorSegmentuSilnika()
{
	double modyfikator = 0.0;
	if (this->segment == 'A')
	{
		modyfikator = 1.0;
	}
	if (this->segment == 'B')
	{
		modyfikator = 1.1;
	}
	if (this->segment == 'C')
	{
		modyfikator = 1.2;
	}
	if (this->segment == 'D')
	{
		modyfikator = 1.3;
	}
	if (this->segment == 'E')
	{
		modyfikator = 1.5;
	}
	return modyfikator;
}
void Samochod::obliczCeneBazow¹()
{
	cena *= obliczModyfikatorPojemnoœciSilnika()*ObliczmodyfikatorSegmentuSilnika();
}