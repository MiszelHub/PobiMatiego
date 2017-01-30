#ifndef STAN_POCZATKOWY_H
#define STAN_POCZATKOWY_H
#include <iostream>
#include <vector>
#include "Klient.h"
#include "Pojazd.h"

using namespace std;

class Stan_poczatkowy
{
public:
	vector<Klient*> listaKlientow;
	vector<Pojazd*> listaPojazdow;
	Stan_poczatkowy();
	virtual ~Stan_poczatkowy();
	void stworzPojazdy();
	void stworzKlientow();
protected:

private:
};

#endif // STAN_POCZATKOWY_H
