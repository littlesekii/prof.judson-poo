#include "Money.h"

Money::Money()
{
	this->valor = 0;
}

Money::Money(double v)
{
	this->valor = v;
}

Money::operator double()
{
	return this->valor;
}
