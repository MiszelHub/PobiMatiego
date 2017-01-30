#ifndef SILNIKOWE_H
#define SILNIKOWE_H
#include<iostream>
#include "Pojazd.h"

using namespace std;

class Silnikowe : public Pojazd
{
public:
	Silnikowe(int numer, string producent, string model, float silnik);
	virtual ~Silnikowe();
	string wyswietl();
	double jakaCena();
protected:
	float silnik;
private:
};

#endif // SILNIKOWE_H
