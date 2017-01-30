#ifndef ROWER_H
#define ROWER_H

#include "Pojazd.h"

class Rower : public Pojazd
{
public:
	Rower(int numer, string producent, string model, int a);

	virtual ~Rower();
	string wyswietl();

protected:
private:
	int a;
};

#endif // ROWER_H
