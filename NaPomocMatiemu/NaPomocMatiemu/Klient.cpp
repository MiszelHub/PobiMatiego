#include "Klient.h"
#include <iostream>
#include <sstream>

using namespace std;
//add vector constructor
Klient::Klient(string imie, string nazwisko, int numerKlienta, double bilans) :imie(imie), nazwisko(nazwisko), numerKlienta(numerKlienta), bilans(bilans), wypozyczeniaBiezace()
{
}

Klient::~Klient()
{
	//dtor
}

void Klient::jakiRabat()
{
}

void Klient::wypozycz(Pojazd* pojazd, string dataPoczatkowa)
{
	wypozyczeniaBiezace.push_back(new Wypozyczenie(dataPoczatkowa, this, pojazd));
}

void Klient::zwroc(Pojazd* pojazd)
{
	vector<Wypozyczenie*>::iterator it = wypozyczeniaBiezace.begin();

	for (it; it != wypozyczeniaBiezace.end(); ++it)
	{
		if ((*it)->getPojazd() == pojazd)
		{
			(*it)->jakiRachunek();
		}
	}
}

string Klient::wyswietl()
{
	stringstream ss;
	ss << "Imie: " << this->imie << " Nazwisko: " << this->nazwisko << " Numer klienta: " << this->numerKlienta << " Bilans: " << this->bilans << endl;
	string s = ss.str();
	return s;
}