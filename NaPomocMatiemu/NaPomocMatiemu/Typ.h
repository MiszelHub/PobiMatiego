#ifndef TYP_H
#define TYP_H
#include<string>
class Typ
{
public:
	Typ(std::string nazwaTypu);
	virtual ~Typ();
	double virtual obliczRabat(double bilans);
	void maxIloscWypozyczen();
	std::string wyswietl();
protected:
	std::string jakiTyp;
	int ileSamochodow;
private:
};

#endif // TYP_H
