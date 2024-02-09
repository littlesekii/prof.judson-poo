#define _CRT_SECURE_NO_WARNINGS
#include "Tempo.h"
#include <iostream>
using namespace std;

Tempo::Tempo()
{
    this->horas = 0;
    this->minutos = 0;
}

Tempo::Tempo(int horas, int minutos)
{
    this->horas = horas;
    this->minutos = minutos;
}

void Tempo::exibir() const
{
    char horario[6];

    sprintf(horario, "%02d:%02d", this->horas, this->minutos);
    cout << horario;
}

Tempo Tempo::operator+(const Tempo& t) 
{
    int totalMinutos{};
    int totalHoras{};

    totalMinutos += this->horas * 60;
    totalMinutos += this->minutos;


    int somaMinutos{};
    somaMinutos += t.horas * 60;
    somaMinutos += t.minutos;

    totalMinutos += somaMinutos;

    totalMinutos = clamp(totalMinutos);

    totalHoras = totalMinutos / 60;
    totalMinutos %= 60;

    return { totalHoras, totalMinutos };
}

Tempo Tempo::operator-(const Tempo& t) 
{
    int totalMinutos{};
    int totalHoras{};

    totalMinutos += this->horas * 60;
    totalMinutos += this->minutos;


    int diffMinutos{};
    diffMinutos += t.horas * 60;
    diffMinutos += t.minutos;

    totalMinutos -= diffMinutos;

    totalMinutos = clamp(totalMinutos);

    totalHoras = totalMinutos / 60;
    totalMinutos %= 60;

    return { totalHoras, totalMinutos };
}

Tempo Tempo::operator*(int t)
{
    int totalMinutos{};
    int totalHoras{};

    totalMinutos += this->horas * 60;
    totalMinutos += this->minutos;
    totalMinutos *= t;

    totalMinutos = clamp(totalMinutos);

    totalHoras = totalMinutos / 60;
    totalMinutos %= 60;

    return { totalHoras, totalMinutos };
}

Tempo Tempo::operator+(int t)
{
   
    int totalMinutos{};
    int totalHoras{};

    totalMinutos += this->horas * 60;
    totalMinutos += this->minutos;
    totalMinutos += t;

    totalMinutos = clamp(totalMinutos);

    totalHoras = totalMinutos / 60;
    totalMinutos %= 60;

    return { totalHoras, totalMinutos };
}
