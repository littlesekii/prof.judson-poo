#pragma once
#include <iostream>

using std::istream;
using std::ostream;

class VetorRet
{

public:
	double x, y;

public:
	VetorRet();
	VetorRet(double n1, double n2);

	// ajusta posi��o x com base em magnitude e �ngulo 
	// ajusta posi��o y com base em magnitude e �ngulo 
	double Magnitude();
	double Angulo();

	VetorRet operator+(const VetorRet& v) const;
	VetorRet operator-(const VetorRet& v) const;
	VetorRet operator-() const;
	VetorRet operator*(double n) const;

	friend VetorRet operator*(double n, const VetorRet& v);
	friend ostream& operator<<(ostream& os, const VetorRet& v);

};