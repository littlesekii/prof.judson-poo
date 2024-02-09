#define _CRT_SECURE_NO_WARNINGS
#include "Cor.h"

Cor::Cor()
{
	this->r = -1;
	this->g = -1;
	this->b = -1;
}

Cor::Cor(int r, int g, int b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}

Cor Cor::operator*(Cor& c)
{
	return {
		this->r * c.r / 255,
		this->g * c.g / 255,
		this->b * c.b / 255,
	};
}

istream& operator>>(istream& in, Cor& c)
{
	in >> c.r >> c.g >> c.b;
	return in;
}

ostream& operator<<(ostream& out, const Cor& c)
{
	char output[40];

	if (c.r == -1 || c.g == -1 || c.b == -1)
	{
		sprintf(output, "\x1b[0m");
	}
	else
	{
		sprintf(output,
			"\x1b[38;2;%d;%d;%dm",
			c.r, c.g, c.b
		);
	}

	out << output;
	return out;
}
