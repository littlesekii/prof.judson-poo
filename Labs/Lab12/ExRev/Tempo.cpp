// defini��o da classe Tempo
#include "Tempo.h"
#include <iostream>
using std::cout;

Tempo::Tempo(int h, int m)
{
    cout << "Tempo constru�do" << std::endl;
    horas = h;
    minutos = m;
}

Tempo::~Tempo()
{
    cout << "Tempo destru�do." << std::endl;
}

Tempo::operator double()
{
    return horas + minutos / 60.0;
}

Tempo::operator int()
{
    return horas;
}

Tempo Tempo::operator+(const Tempo& t) const
{
    Tempo soma;
    soma.horas = horas + t.horas;
    soma.minutos = minutos + t.minutos;

    // minutos excedentes viram horas
    soma.horas += soma.minutos / 60;
    soma.minutos %= 60;
    return soma;
}

Tempo operator+(const Tempo& t, int h)
{
    Tempo soma;
    soma.horas = h + t.horas;
    soma.minutos = t.minutos;
    return soma;
}

Tempo operator+(int h, const Tempo& t)
{
    return t + h;
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}