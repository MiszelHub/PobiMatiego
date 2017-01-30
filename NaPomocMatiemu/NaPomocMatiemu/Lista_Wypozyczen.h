#ifndef LISTA_WYPOZYCZEN_H
#define LISTA_WYPOZYCZEN_H

#include <vector>
#include "Wypozyczenie.h"
class Wypozyczenie;
class Lista_Wypozyczen
{
public:
	Lista_Wypozyczen();
	virtual ~Lista_Wypozyczen();

	std::vector<Wypozyczenie *> wypozyczenia;
protected:

private:
};

#endif // LISTA_WYPOZYCZEN_H
