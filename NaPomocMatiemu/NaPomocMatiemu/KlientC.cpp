#include "KlientC.h"

KlientC::KlientC(std::string nazwaTypu) :Typ(nazwaTypu)
{
	//ctor
}

KlientC::~KlientC()
{
	//dtor
}

double KlientC::obliczRabat(double bilans)
{
	double rabat = 0;
	if (bilans <= 50)
	{
		rabat = bilans*0.05;
	}
	else if ((bilans > 50) && (bilans <= 100))
	{
		rabat = bilans*0.07;
	}
	else if (bilans > 100)
	{
		rabat = bilans*0.1;
	}
	return rabat;
}