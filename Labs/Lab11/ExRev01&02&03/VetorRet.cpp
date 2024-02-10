#include <iostream>
#include <cmath>
#include "VetorRet.h"
using std::ostream;

const double GrausPorRad = 45.0 / atan(1.0);

// Construtores
// ---------------------------------------------------------------------------

VetorRet::VetorRet()
{
    x = y = 0;
}

VetorRet::VetorRet(double n1, double n2)
{
    x = n1; y = n2;
}

// Métodos Publicos
// ---------------------------------------------------------------------------

double VetorRet::Magnitude()
{
    return sqrt(x * x + y * y);
}

double VetorRet::Angulo()
{
    return atan2(y, x);
}

// Sobrecarga de Operadores
// ---------------------------------------------------------------------------



VetorRet VetorRet::operator+(const VetorRet& v) const
{
    return VetorRet(x + v.x, y + v.y);
}

VetorRet VetorRet::operator*(double n) const
{
    return VetorRet(n * x, n * y);
}

VetorRet VetorRet::operator-(const VetorRet& v) const
{
    return VetorRet(x - v.x, y - v.y);
}

VetorRet VetorRet::operator-() const
{
    return VetorRet(-x, -y);
}

// Funções Amigas
// ---------------------------------------------------------------------------

VetorRet operator*(double n, const VetorRet& v)
{
    return VetorRet(n * v.x, n * v.y);
}

ostream& operator<<(ostream& os, const VetorRet& v)
{
    os << "(x,y) = (" << v.x << ", " << v.y << ")";

    return os;
}

// ---------------------------------------------------------------------------