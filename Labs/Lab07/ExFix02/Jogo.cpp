#include "Jogo.h"
#include <iostream>
using namespace std;

void calcular(Jogo* este)
{
    if (este->horas > 0)
        este->custo = este->preco / este->horas;
}

void atualizar(Jogo* este, float valor)
{
    este->preco = valor;
    calcular(este);
}

void jogar(Jogo* este, int tempo)
{
    {
        {

        }
    }
    este->horas += tempo;
    calcular(este);
}

void exibir(const Jogo* este)
{
    cout << fixed;
    cout.precision(2);

    cout << este->nome << " R$"
        << este->preco << " "
        << este->horas << "h = R$"
        << este->custo << "/h\n";
}