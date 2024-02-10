#pragma once
#include <iostream>
#include "Tempo.h"

using std::ostream;

class Horario
{
private:
    int horas;
    int minutos;

public:
    Horario(int h = 0, int m = 0);

    operator Tempo();

    friend Horario operator-(const Horario& h1, const Horario& h2);
    friend ostream& operator<<(ostream& os, const Horario& h);
};

