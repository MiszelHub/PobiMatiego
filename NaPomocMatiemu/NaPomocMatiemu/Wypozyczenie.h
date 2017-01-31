#ifndef WYPOZYCZENIE_H
#define WYPOZYCZENIE_H

#include <iostream>
#include <list>
#include <string>
#include "Pojazd.h"
#include "Klient.h"
#include "Lista_Wypozyczen.h"
#include "Archiwum.h"

//using namespace std;
class Archiwum;
class Klient;
class Wypozyczenie
{
public:
	Wypozyczenie(std::string dataPoczatkowa, Klient* klient, Pojazd* pojazd);
	virtual ~Wypozyczenie();
	void noweWypozyczenie();
	void archiwum(string dataKoncowa, Archiwum *archiwum);
	void wystawRachunek();
	void wyswietl();
	Klient* getKlient();
	Pojazd* getPojazd();
	double getKoszt();
	//list <Wypozyczenie*> wypozyczenia;
protected:

private:
	int UUID;
	std::string dataPoczatkowa;
	std::string dataKoncowa;
	int ileDni;
	double koszt;
	Klient* klient;
	Pojazd* pojazd;
};

#endif // WYPOZYCZENIE_H
