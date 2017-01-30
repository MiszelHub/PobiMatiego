#include "KlientB.h"

KlientB::KlientB()
{
	//ctor
}

KlientB::~KlientB()
{
	//dtor
}

double KlientB::obliczRabat(double bilans)
{
	double rabat = 0;
	for (size_t i = 0; i < bilans;)
	{
		bilans *= 0.05;
		i += 10;
	}
	return rabat;
}