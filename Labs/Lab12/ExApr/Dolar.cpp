// --------------------------------

#include "Dolar.h"
#include "Real.h"

Dolar::Dolar(double d)
{
	dmoeda = d;
}

Dolar::operator Real()
{
	return { dmoeda * conversao };
}

ostream& operator<<(ostream& os, const Dolar& d)
{
	os << d.dmoeda;
	return os;
}