#include "Klient.h"
#include <iostream>
#include <sstream>

using namespace std;
//add vector constructor
Klient::Klient(string imie, string nazwisko, int numerKlienta, double bilans,string haslo) :imie(imie), nazwisko(nazwisko), numerKlienta(numerKlienta), bilans(bilans), wypozyczeniaBiezace(),haslo(haslo)
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

string Klient::getHaslo()
{
	return this->haslo;
}

string Klient::getNazwisko()
{
	return this->nazwisko;
}

string Klient::wyswietl()
{
	stringstream ss;
	ss << "Imie: " << this->imie << " Nazwisko: " << this->nazwisko << " Numer klienta: " << this->numerKlienta << " Bilans: " << this->bilans << endl;
	string s = ss.str();
	return s;
}