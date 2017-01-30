#ifndef POJAZD_H
#define POJAZD_H
#include<iostream>
#include <string>

using namespace std;
class Pojazd
{
public:
	Pojazd(int numer, string producent, string model);
	virtual ~Pojazd();
	string wyswietl();
	virtual double jakaCena();
protected:
	int numer;
	string producent;
	string model;
	double cena;
	virtual void obliczCeneBazow¹();
private:
};

#endif // POJAZD_H
