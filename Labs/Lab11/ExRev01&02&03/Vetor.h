#pragma once
#include <iostream>

using std::istream;
using std::ostream;

class Vetor
{

public:
	enum Coord { RET, POL };

	double x, y;
	double mag;
	double ang;
	Coord rep;

	void SetMag();
	void SetAng();
	void SetX();
	void SetY();
	// coordenadas cartesianas 
	// comprimento do vetor 
	// �ngulo do vetor em graus 
	// representa��o padr�o 
	// ajusta magnitude com base em (x,y) 
	// ajusta �ngulo com base em (x,y) 
public:
	Vetor();
	Vetor(double n1, double n2, Coord tipo = RET);

	// ajusta posi��o x com base em magnitude e �ngulo 
	// ajusta posi��o y com base em magnitude e �ngulo 
	double Magnitude() { return mag; }
	double Angulo() { return ang; }

	void SetCoord(Coord modo) { rep = modo; }

	Vetor operator+(const Vetor& v) const;
	Vetor operator-(const Vetor& v) const;
	Vetor operator-() const;
	Vetor operator*(double n) const;

	friend Vetor operator*(double n, const Vetor& v);
	friend ostream& operator<<(ostream& os, const Vetor& v);

};