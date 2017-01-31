#ifndef KLIENTD_H
#define KLIENTD_H

#include "Typ.h"

class KlientD : public Typ
{
public:
	KlientD(std::string nazwaTypu);
	virtual ~KlientD();
	double obliczRabat(double bilans);
protected:

private:
};

#endif // KLIENTD_H
