#ifndef TYP_H
#define TYP_H

class Typ
{
public:
	Typ();
	virtual ~Typ();
	void virtual obliczRabat();
	void maxIloscWypozyczen();

protected:

private:
	char jakiTyp;
	int ileSamochodow;
};

#endif // TYP_H
