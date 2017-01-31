#ifndef KLIENTC_H
#define KLIENTC_H

#include "Typ.h"

class KlientC : public Typ
{
public:
	KlientC(std::string nazwaTypu);
	virtual ~KlientC();
	double obliczRabat(double bilans);
protected:

private:
};

#endif // KLIENTC_H
