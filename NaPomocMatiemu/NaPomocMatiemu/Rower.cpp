#include "Rower.h"
#include <string>
#include <sstream>
Rower::Rower(int numer, string producent, string model, int a) : Pojazd(numer, producent, model), a(a)
{
	//ctor
}

Rower::~Rower()
{
	//dtor
}

string Rower::wyswietl()
{
	stringstream ss;
	ss << Pojazd::wyswietl() << "A: " << this->a << endl;
	string s = ss.str();
	return s;
}