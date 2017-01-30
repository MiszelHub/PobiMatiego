#include "KolekcjaKlientow.h"
#include "Klient.h"

#define LICZBA_KLIENTOW_W_BAZIE 5
KolekcjaKlientow::KolekcjaKlientow()
{
	for (size_t i = 0; i < LICZBA_KLIENTOW_W_BAZIE; i++) {
		{
			Klient *klient = new Klient(" IMIE", " NAZWISKO", i, 50);
			listaKlientow.push_back(klient);
		}
	}
}

KolekcjaKlientow::~KolekcjaKlientow()
{
	for (vector<Klient*>::iterator it = listaKlientow.begin(); it != listaKlientow.end(); it++)
	{
		delete *it;
	}
	listaKlientow.clear();
}

vector<Klient*>KolekcjaKlientow::getListaKlientow() {
	return this->listaKlientow;
}