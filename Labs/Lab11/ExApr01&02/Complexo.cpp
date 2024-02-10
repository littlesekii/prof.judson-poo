#include "Complexo.h"

Complexo::Complexo()
{
	this->real = this->imaginario = 0;
}

Complexo::Complexo(int real, int imaginario)
{
	this->real = real;
	this->imaginario = imaginario;
}

Complexo Complexo::operator+(Complexo& c)
{
	return Complexo(this->real + c.real, this->imaginario + c.imaginario);
}

Complexo Complexo::operator-(Complexo& c)
{
	return Complexo(this->real - c.real, this->imaginario - c.imaginario);
}

Complexo Complexo::operator*(Complexo& c)
{
	return Complexo(this->real * c.real - this->imaginario * c.imaginario, this->real * c.imaginario + this->imaginario * c.real);
}

Complexo Complexo::operator*(int r)
{
	return Complexo(this->real * r, this->imaginario * r);
}

Complexo Complexo::operator~()
{
	return Complexo(this->real, -this->imaginario);
}

/*

Complexo Complexo::soma(Complexo& c)
{
	return Complexo(this->real + c.real, this->imaginario + c.imaginario);
}

Complexo Complexo::subtracao(Complexo& c)
{
	return Complexo(this->real - c.real, this->imaginario - c.imaginario);
}

Complexo Complexo::multiplicacao(Complexo& c)
{
	return Complexo(this->real * c.real - this->imaginario * c.imaginario, this->real * c.imaginario + this->imaginario * c.real);
}

Complexo Complexo::multiplicacao(int r)
{
	return Complexo(this->real * r, this->imaginario * r);
}

Complexo Complexo::conjugado()
{
	return Complexo(this->real, -this->imaginario);
}

void Complexo::exibir()
{
	cout.unsetf(ios::showpos);
	cout << this->real;
	cout.setf(ios::showpos);
	cout << this->imaginario;
	cout << 'i';
}
*/

Complexo operator*(int r, Complexo& c)
{
	return Complexo(c.real * r, c.imaginario * r);
}

ostream& operator<<(ostream& out, const Complexo& c)
{
	out.unsetf(ios::showpos);
	out << c.real;
	out.setf(ios::showpos);
	out << c.imaginario;
	out << 'i';
	return out;
}

istream& operator>>(istream& in, Complexo& c)
{
	in >> c.real >> c.imaginario;
	in.ignore();
	return in;
}
