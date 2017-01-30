#include "Wypozyczenie.h"
#include <iostream>
#include <string>
using namespace std;
Wypozyczenie::Wypozyczenie(std::string dataPoczatkowa, Klient* klient, Pojazd* pojazd) : dataPoczatkowa(dataPoczatkowa), klient(klient), pojazd(pojazd), ileDni(0)
{
}

Wypozyczenie::~Wypozyczenie()
{
}

void Wypozyczenie::noweWypozyczenie()
{
}

void Wypozyczenie::archiwum(string dataKoncowa, Archiwum *archiwum)
{
	this->dataKoncowa = dataKoncowa;
	this->ileDni = stoi(dataKoncowa.substr(0, 2)) - stoi(dataPoczatkowa.substr(0, 2)) + 30 * (stoi(dataKoncowa.substr(3, 2)) - stoi(dataPoczatkowa.substr(3, 2)));
	archiwum->wypozyczenia.push_back(this);
}

void Wypozyczenie::jakiRachunek()
{
	//koszt = ileDni*getPojazd()->
}

void Wypozyczenie::wyswietl()
{
	cout << "Wypozyczenie" << endl;
}

Klient* Wypozyczenie::getKlient()
{
	return klient;
}

Pojazd* Wypozyczenie::getPojazd()
{
	return pojazd;
}