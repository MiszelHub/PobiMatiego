#include "Stan_poczatkowy.h"
#include <iostream>
//#include <ctime>
#include <stdlib.h>
#include "KolekcjaKlientow.h"
#include "KolekcjaPojazdow.h"
#include <string>

using namespace std;
Stan_poczatkowy::Stan_poczatkowy()
{
	//ctor
}

Stan_poczatkowy::~Stan_poczatkowy()
{
	//dtor
}

void Stan_poczatkowy::stworzKlientow()
{
	KolekcjaKlientow *kolekcjaKlientow = new KolekcjaKlientow();
	this->listaKlientow = kolekcjaKlientow->getListaKlientow();
}
void Stan_poczatkowy::stworzPojazdy()
{
	KolekcjaPojazdow *kolekcjaPojazdow = new KolekcjaPojazdow();
	this->listaPojazdow = kolekcjaPojazdow->getListaPojazdow();
}