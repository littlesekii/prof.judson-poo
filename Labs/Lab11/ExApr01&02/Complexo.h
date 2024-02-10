#pragma once
#include <iostream>

using namespace std;

class Complexo
{
private:
	int real;
	int imaginario;

public:
	Complexo();
	Complexo(int real, int imaginario);

	/*
	Complexo soma(Complexo& c);
	Complexo subtracao(Complexo& c);
	Complexo multiplicacao(Complexo& c);
	Complexo multiplicacao(int r);
	Complexo conjugado();
	

	void exibir();
	*/

	Complexo operator+(Complexo& c);
	Complexo operator-(Complexo& c);
	Complexo operator*(Complexo& c);
	Complexo operator*(int r);
	Complexo operator~();

	friend Complexo operator*(int r, Complexo& c);
	friend ostream& operator<<(ostream& out, const Complexo& c);
	friend istream& operator>>(istream& in, Complexo& c);
};

