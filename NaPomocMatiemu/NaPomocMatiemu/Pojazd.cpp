#include "Pojazd.h"
#include "Rower.h"
#include <sstream>
Pojazd::Pojazd(int numer, string producent, string model) :numer(numer), producent(producent), model(model)
{
	obliczCeneBazow¹();
}

Pojazd::~Pojazd()
{
	//dtor
}

string Pojazd::wyswietl() {
	stringstream ss;
	ss << "Numer: " << this->numer << " Producent: " << this->producent << " Model: " << this->model << endl;
	string s = ss.str();
	return s;
}

double Pojazd::jakaCena()
{
	return cena;
}

void Pojazd::obliczCeneBazow¹()
{
	//
}