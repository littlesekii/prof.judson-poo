// real.h
// ----------------------------------------

#include<iostream>
using std::ostream;

class Dolar;  // forward declaration

class Real
{
private:
	double rmoeda;

public:
	Real(double r = 0.0);
	Real operator+(const Real r)const;
	friend ostream& operator<<(ostream& os, const  Real& r);
	operator Dolar();
};