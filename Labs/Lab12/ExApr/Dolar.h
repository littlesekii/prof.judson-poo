// ----------------------------------------
#include<iostream>
using std::ostream;

#define conversao 4.84

class Real;   // forward declaration

class Dolar
{
private:
	double dmoeda;

public:
	Dolar(double d = 0.0);
	operator Real();
	friend ostream& operator<<(ostream& os, const Dolar& d);
};