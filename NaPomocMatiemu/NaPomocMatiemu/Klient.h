#ifndef KLIENT_H
#define KLIENT_H

#include <vector>
#include <string>
#include "Pojazd.h"
#include "Typ.h"
#include "Lista_Wypozyczen.h"
#include "Wypozyczenie.h"

using namespace std;
class Wypozyczenie;
class Klient
{
public:
	Klient(string imie, string nazwisko, int numerKlienta, double bilans, string haslo, Typ & typ);
	virtual ~Klient();
	void jakiRabat();
	void wypozycz(Pojazd* pojazd, string dataPoczatkowa);
	void zwroc(Pojazd* pojazd);
	string getNazwisko();
	string getHaslo();
	string wyswietl();
	Typ& getTyp();
	vector<Wypozyczenie*> wypozyczeniaBiezace;
	double getRabat();
protected:
	string imie;
	string nazwisko;
	int numerKlienta;
	double bilans;
	Typ jakiTyp;
	std::string haslo;
	double rabat;

private:
	//vector<Klient *> klienci;
};

#endif // KLIENT_H
