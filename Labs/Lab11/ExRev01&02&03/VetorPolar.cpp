#include <iostream>
#include <cmath>
#include "VetorPolar.h"
using std::ostream;

const double GrausPorRad = 45.0 / atan(1.0);

// Construtores
// ---------------------------------------------------------------------------

VetorPolar::VetorPolar()
{
    ang = mag = 0;
}

VetorPolar::VetorPolar(double n1, double n2)
{
    mag = n1;
    ang = n2 / GrausPorRad;
}

// Métodos Publicos
// ---------------------------------------------------------------------------

double VetorPolar::X()
{
    return mag * cos(ang);
}

double VetorPolar::Y()
{
    return mag * sin(ang);
}


// Sobrecarga de Operadores
// ---------------------------------------------------------------------------

VetorPolar VetorPolar::operator+(const VetorPolar& v) const
{
    return VetorPolar(mag + v.mag, ang* GrausPorRad + v.ang * GrausPorRad);
}

VetorPolar VetorPolar::operator*(double n) const
{
    return VetorPolar(n * mag, n * ang * GrausPorRad);
}

VetorPolar VetorPolar::operator-(const VetorPolar& v) const
{
    return VetorPolar(mag - v.mag, ang * GrausPorRad - v.ang * GrausPorRad);
}

VetorPolar VetorPolar::operator-() const
{
    return VetorPolar(-mag, -ang * GrausPorRad);
}

// Funções Amigas
// ---------------------------------------------------------------------------

VetorPolar operator*(double n, const VetorPolar& v)
{
    return VetorPolar(n * v.mag, n * v.ang * GrausPorRad);
}

ostream& operator<<(ostream& os, const VetorPolar& v)
{
    os << "(m,a) = (" << v.mag << ", " << v.ang * GrausPorRad << ")";
    return os;
}

// ---------------------------------------------------------------------------