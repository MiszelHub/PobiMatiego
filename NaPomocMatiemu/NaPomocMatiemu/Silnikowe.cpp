#include "Silnikowe.h"
#include <sstream>
#include <string>

Silnikowe::Silnikowe(int numer, string producent, string model, float silnik) :Pojazd(numer, producent, model), silnik(silnik)
{
	//ctor
}

Silnikowe::~Silnikowe()
{
	//dtor
}

string Silnikowe::wyswietl()
{
	stringstream ss;
	ss << Pojazd::wyswietl() << "Silnik: " << this->silnik << endl;
	string s = ss.str();
	return s;
}

double Silnikowe::jakaCena()
{
	/*if (silnik < 1000)
	{
		return cena;
	}
	else if (silnik > 2000)
	{
		return cena*1.5;
	}
	else
	{
		return cena*(1 + ((silnik - 1000)*0.0005));
	}*/
	return cena;
}

double Silnikowe::obliczModyfikatorPojemnościSilnika()
{
	double modyfikator = 0.0;
	if (this->silnik < 1000)
	{
		modyfikator = 1.0;
	}
	if ((this->silnik <= 2000) && (this->silnik >= 1000))
	{
		modyfikator = (1 + ((silnik - 1000)*0.0005));
	}
	if (this->silnik > 2000)
	{
		modyfikator = 2.0;
	}
	return modyfikator;
}