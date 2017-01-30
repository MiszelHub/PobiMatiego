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
	Klient(string imie, string nazwisko, int numerKlienta, double bilans);
	virtual ~Klient();
	void jakiRabat();
	void wypozycz(Pojazd* pojazd, string dataPoczatkowa);
	void zwroc(Pojazd* pojazd);
	string wyswietl();

	vector<Wypozyczenie *> wypozyczeniaBiezace;

protected:
	string imie;
	string nazwisko;
	int numerKlienta;
	double bilans;
	Typ jakiTyp;
	std::string has³o;

private:
	//vector<Klient *> klienci;
};

#endif // KLIENT_H
