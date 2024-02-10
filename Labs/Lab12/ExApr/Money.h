#pragma once
class Money
{
private: 
	double valor;

public:
	Money();
	Money(double v);

	operator double();
};

