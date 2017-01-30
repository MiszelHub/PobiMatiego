#ifndef TYP_H
#define TYP_H

class Typ
{
public:
	Typ();
	virtual ~Typ();
	double virtual obliczRabat(double bilans);
	void maxIloscWypozyczen();

protected:
	char jakiTyp;
	int ileSamochodow;
private:
};

#endif // TYP_H
