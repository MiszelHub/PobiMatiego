#ifndef KLIENTB_H
#define KLIENTB_H

#include "Typ.h"

class KlientB : public Typ
{
public:
	KlientB();
	virtual ~KlientB();
	double obliczRabat(double bilans);
protected:

private:
};

#endif // KLIENTB_H
