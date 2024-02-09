#define _CRT_SECURE_NO_WARNINGS
// definiçăo da classe Tempo
#include "Tempo.h"

//------------------------------------------------
// Construtor

Tempo::Tempo(int h, int m)
{
    horas = h;
    minutos = m;
}

//------------------------------------------------
// Funçőes Membro

Tempo Tempo::operator+(const Tempo& t) const
{
    Tempo soma;
    soma.minutos = minutos + t.minutos;
    soma.horas = horas + t.horas;

    // minutos excedentes viram horas
    soma.horas += soma.minutos / 60;
    soma.minutos %= 60;
    return soma;
}

Tempo Tempo::operator+(int num) const
{
    return { horas + num, minutos };
}

//------------------------------------------------
// Funçőes Amigas

Tempo operator+(int num, const Tempo& t)
{
    return t + num;
}

istream& operator>>(istream& in, Tempo& t)
{
    in >> t.horas;
    in.ignore();
    in >> t.minutos;
    return in;
}

ostream& operator<<(ostream& out, const Tempo& t)
{
    char output[6];
    sprintf(output, "%02d:%02d", t.horas, t.minutos);
    out << output;
    return out;
}
