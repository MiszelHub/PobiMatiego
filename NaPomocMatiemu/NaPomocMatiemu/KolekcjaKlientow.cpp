#include "KolekcjaKlientow.h"
#include "Klient.h"
#include "KlientA.h"
#include "KlientB.h"
#include "KlientC.h"
#include "KlientD.h"
#include<random>

#define LICZBA_KLIENTOW_W_BAZIE 5
KolekcjaKlientow::KolekcjaKlientow()
{
	for (size_t i = 0; i < LICZBA_KLIENTOW_W_BAZIE; i++) {
		{
			Klient *klient = new Klient("IMIE", "NAZWISKO" + std::to_string(i), i, 50, "Haslo" + std::to_string(i), losyjTypKienta());
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

Typ KolekcjaKlientow::losyjTypKienta()
{
	Typ kolekcjaTypow[4] = { KlientA("A"),KlientB("B") ,KlientC("C") ,KlientD("D") };
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, 3);
	return kolekcjaTypow[dist(mt)];
}