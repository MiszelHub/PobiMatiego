#ifndef ARCHIWUM_H
#define ARCHIWUM_H

#include <vector>
#include "Wypozyczenie.h"
#include<memory>
class Wypozyczenie;
class Archiwum
{
public:
	Archiwum();
	virtual ~Archiwum();

	std::vector<Wypozyczenie *> wypozyczenia;
protected:

private:
};

#endif // ARCHIWUM_H
