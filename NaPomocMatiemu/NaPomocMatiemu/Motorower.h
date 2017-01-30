#ifndef MOTOROWER_H
#define MOTOROWER_H

#include "Silnikowe.h"

class Motorower : public Silnikowe
{
public:
	Motorower(int numer, string producent, string model, float silnik);
	virtual ~Motorower();

protected:

private:
};

#endif // MOTOROWER_H
