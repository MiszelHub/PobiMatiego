#include "KolekcjaPojazdow.h"
#include "Samochod.h"
#include "Rower.h"
#include "Motorower.h"
#include "Silnikowe.h"
#include "Pojazd.h"
#define LICZBA_POJAZDOW_W_BAZIE 10

KolekcjaPojazdow::KolekcjaPojazdow()
{
	listaPojazdow = vector<Pojazd*>();
	for (int i = 0; i < LICZBA_POJAZDOW_W_BAZIE; i++) {
		if (i < 3) {
			Pojazd *pojazd = new Rower(i, "producent_" + i, "model_" + i, ((i + 1) * 100));
			listaPojazdow.push_back(pojazd);
		}
		if (i >= 3 && i < 7) {
			Pojazd *pojazd = new Samochod(i, "producent_" + i, "model_" + i, 900.00, 'A');
			listaPojazdow.push_back(pojazd);
		}
		if (i >= 7) {
			Pojazd *pojazd = new Motorower(i, "producent_" + i, "model_" + i, 900.00);
			listaPojazdow.push_back(pojazd);
		}
	}
}

KolekcjaPojazdow::~KolekcjaPojazdow()
{
	for (vector<Pojazd*>::iterator it = listaPojazdow.begin(); it != listaPojazdow.end();)
	{
		delete *it;
		it = listaPojazdow.erase(it);
	}
}

vector<Pojazd*>KolekcjaPojazdow::getListaPojazdow() {
	return this->listaPojazdow;
}