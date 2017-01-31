#ifndef KLIENTA_H
#define KLIENTA_H

#include "Typ.h"

class KlientA : public Typ
{
public:
	KlientA(std::string nazwaTypu);
	virtual ~KlientA();
	double obliczRabat(double bilans);
protected:

private:
};

#endif // KLIENTA_H
