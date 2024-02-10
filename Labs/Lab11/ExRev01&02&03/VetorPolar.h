#pragma once
#include <iostream>

using std::istream;
using std::ostream;

class VetorPolar
{

public:
	double mag;
	double ang;

public:
	VetorPolar();
	VetorPolar(double n1, double n2);

	// ajusta posi��o x com base em magnitude e �ngulo 
	// ajusta posi��o y com base em magnitude e �ngulo 
	double X();
	double Y();

	VetorPolar operator+(const VetorPolar& v) const;
	VetorPolar operator-(const VetorPolar& v) const;
	VetorPolar operator-() const;
	VetorPolar operator*(double n) const;

	friend VetorPolar operator*(double n, const VetorPolar& v);
	friend ostream& operator<<(ostream& os, const VetorPolar& v);

};