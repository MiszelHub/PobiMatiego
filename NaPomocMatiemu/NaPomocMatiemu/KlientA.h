#ifndef KLIENTA_H
#define KLIENTA_H

#include "Typ.h"

class KlientA : public Typ
{
public:
	KlientA();
	virtual ~KlientA();
	double obliczRabat(double bilans);
protected:

private:
};

#endif // KLIENTA_H
