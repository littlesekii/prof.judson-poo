#include "Horario.h"

Horario::Horario(int h, int m)
{
    this->horas = h;
    this->minutos = m;
}

Horario::operator Tempo()
{
    return Tempo(horas, minutos);
}

Horario operator-(const Horario& h1, const Horario& h2)
{
    int horas = (h1.horas + h1.minutos / 60.f) - (h2.horas + h2.minutos / 60.f);
    int minutos = ((h1.horas + h1.minutos / 60.f) - (h2.horas + h2.minutos / 60.f) - horas) * 60;
    return Horario(horas, minutos);
}

ostream& operator<<(ostream& os, const Horario& h)
{
    os << h.horas << ":" << h.minutos;
    return os;
}
