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

	// ajusta posição x com base em magnitude e ângulo 
	// ajusta posição y com base em magnitude e ângulo 
	double Magnitude();
	double Angulo();

	VetorRet operator+(const VetorRet& v) const;
	VetorRet operator-(const VetorRet& v) const;
	VetorRet operator-() const;
	VetorRet operator*(double n) const;

	friend VetorRet operator*(double n, const VetorRet& v);
	friend ostream& operator<<(ostream& os, const VetorRet& v);

};