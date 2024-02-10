// --------------------------------

#include "Real.h"
#include "Dolar.h"

Real::Real(double r)
{
	rmoeda = r;
}

Real Real::operator+(const Real r)const
{
	return { rmoeda + r.rmoeda };
}


Real::operator Dolar()
{
	return rmoeda / conversao;
}

ostream& operator<<(ostream& os, const Real& r)
{
	os << r.rmoeda;
	return os;
}