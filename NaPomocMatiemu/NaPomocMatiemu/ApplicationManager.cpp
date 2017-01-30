#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include "Klient.h"
#include "Pojazd.h"
#include "Stan_poczatkowy.h"
#include "Lista_Wypozyczen.h"
#include "Archiwum.h"

using namespace std;

void ApplicatonManager();
void Run();

void stworzKlientow(Stan_poczatkowy *stan);
void stworzPojazdy(Stan_poczatkowy *stan1);
void wyswietlPojazdy(Stan_poczatkowy *stan1);
void wyswietlKlientow(Stan_poczatkowy *stan);
void wyswietlWypozyczenia(Lista_Wypozyczen *lWyp);
void dodajWypozyczenie(Klient *klient, Pojazd *pojazd, string dataPoczatkowa, Lista_Wypozyczen *lWyp);
void doArchiwum(Wypozyczenie *wyp, string dataKoncowa, Lista_Wypozyczen *lWyp, Archiwum *archiwum);
void zmienTypKlienta();

void stworzKlientow(Stan_poczatkowy *stan)
{
	stan->stworzKlientow();
}

void stworzPojazdy(Stan_poczatkowy *stan1)
{
	stan1->stworzPojazdy();
}

void wyswietlKlientow(Stan_poczatkowy *stan) {
	for (int i = 0; i < stan->listaKlientow.size(); i++) {
		Klient *klient = stan->listaKlientow[i];
		cout << klient->wyswietl() << endl;
	}
}

void wyswietlPojazdy(Stan_poczatkowy *stan1) {
	for (int i = 0; i < stan1->listaPojazdow.size(); i++) {
		Pojazd *pojazd = stan1->listaPojazdow[i];
		cout << pojazd->wyswietl() << endl;
	}
}

void dodajWypozyczenie(Klient *klient, Pojazd *pojazd, string dataPoczatkowa, Lista_Wypozyczen *lWyp)
{
	klient->wypozycz(pojazd, dataPoczatkowa);
	lWyp->wypozyczenia.push_back(klient->wypozyczeniaBiezace.back());
}

void doArchiwum(Wypozyczenie *wyp, string dataKoncowa, Lista_Wypozyczen *lWyp, Archiwum *archiwum)
{
	wyp->archiwum(dataKoncowa, archiwum);
}

void wyswietlWypozyczenia(Lista_Wypozyczen *lWyp)
{
	cout << lWyp->wypozyczenia.size() << endl;
	for (vector<Wypozyczenie*>::iterator it = lWyp->wypozyczenia.begin(); it != lWyp->wypozyczenia.end(); it++)
	{
		(*it)->wyswietl();
	}
}

int main()
{
	Lista_Wypozyczen *lWyp;
	Archiwum archiwum;
	Klient *klient=NULL;

	int z = 0;
	string nazwisko, haslo;
	Stan_poczatkowy *stanPocz = new Stan_poczatkowy();
	stworzKlientow(stanPocz);

	do
	{
		cout << "Podaj nazwisko: ";
		cin >> nazwisko;
		cout << "Podaj haslo: ";
		cin >> haslo;

		for (vector<Klient*>::iterator it = stanPocz->listaKlientow.begin(); it != stanPocz->listaKlientow.end(); it++)
		{
			if ((*it)->getNazwisko() == nazwisko && (*it)->getHaslo() == haslo)
			{
				klient = *it;
			}
		}
		if (klient == NULL)
			cout << "Nieprawidlowe nazwisko lub haslo." << endl;

	} while (klient == NULL);

	while (z != 6)
	{
		Stan_poczatkowy *stanPocz1 = new Stan_poczatkowy();
		stworzPojazdy(stanPocz1);
		lWyp = new Lista_Wypozyczen();
		cout << "Witamy w programie Wypozyczalnia" << endl;
		cout << "1.Wyswietl wypozyczenia." << endl;
		cout << "2.Wyswietl klientow." << endl;
		cout << "3.Wyswietl pojazdy." << endl;
		cout << "4.Dodaj wypozyczenie." << endl;
		cout << "5.Zmien typ klienta." << endl;
		cout << "6.Wyjdz z programu." << endl;

		cin >> z;
		system("cls");
		switch (z)
		{
		case 1:
			wyswietlWypozyczenia(lWyp);
			break;
		case 2:
			wyswietlKlientow(stanPocz);
			break;
		case 3:
			wyswietlPojazdy(stanPocz1);
			break;
		case 4:
			int numerPojazdu;
			cout << "Podaj numer pojazdu: ";
			cin >> numerPojazdu;
			time_t  timev;
			time(&timev);
			dodajWypozyczenie(klient, stanPocz1->listaPojazdow.at(numerPojazdu),std::to_string(timev), lWyp);
			break;
		case 5:
			break;
		}
	}
	return 0;
}