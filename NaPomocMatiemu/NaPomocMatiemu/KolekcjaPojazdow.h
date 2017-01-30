#ifndef KOLEKCJAPOJAZDOW_H
#define KOLEKCJAPOJAZDOW_H
#include <iostream>
#include <vector>
#include "Pojazd.h"

class KolekcjaPojazdow
{
public:
	KolekcjaPojazdow();
	virtual ~KolekcjaPojazdow();
	vector<Pojazd*> getListaPojazdow();
protected:

private:
	vector<Pojazd*> listaPojazdow;
};

#endif // KOLEKCJAPOJAZDOW_H
