#include <iostream>
#include "Jogo.h"
using namespace std;

int main()
{
    Jogo gears{ "Gears", 90.0f };

    atualizar(&gears, 100.0f);
    jogar(&gears, 5);
    exibir(&gears);

    return 0;
}

