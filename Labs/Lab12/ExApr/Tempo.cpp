#include "Tempo.h"

Tempo::Tempo(int h, int m)
{
    this->horas = h;
    this->minutos = m;
}

Tempo operator+(const Tempo& t1, const Tempo& t2)
{
    return Tempo(t1.horas + t2.horas, t1.minutos + t2.minutos);
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << ":" << t.minutos;
    return os;
}
