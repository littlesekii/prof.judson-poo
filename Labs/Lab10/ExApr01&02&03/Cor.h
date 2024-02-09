#pragma once
#include <iostream>

using std::istream;
using std::ostream;

class Cor
{

private:
	int r;
	int g;
	int b;
public:
	Cor();
	Cor(int r, int g, int b);

	Cor operator*(Cor& c);

	friend istream& operator>>(istream& in, Cor& c);
	friend ostream& operator<<(ostream& out, const Cor& c);

};

