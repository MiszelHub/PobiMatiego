#ifndef SAMOCHOD_H
#define SAMOCHOD_H

#include "Silnikowe.h"

class Samochod : public Silnikowe
{
public:
	Samochod(int numer, string producent, string model, float silnik, char segment);
	virtual ~Samochod();
	string wyswietl();

protected:
	void obliczCeneBazow¹();
private:
	char segment;
	double ObliczmodyfikatorSegmentuSilnika();
};

#endif // SAMOCHOD_H
