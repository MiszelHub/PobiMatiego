#ifndef KOLEKCJAKLIENTOW_H
#define KOLEKCJAKLIENTOW_H
#include <iostream>
#include <vector>
#include "Klient.h"

class KolekcjaKlientow
{
public:
	KolekcjaKlientow();
	virtual ~KolekcjaKlientow();
	vector<Klient*> getListaKlientow();

protected:

private:
	vector<Klient*> listaKlientow;
};

#endif // KOLEKCJAKLIENTOW_H
