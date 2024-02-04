#include <iostream>
#include "Jogo.h"
using namespace std;

const size_t arrSize = 4;

int main()
{
    system("chcp 1252 > pg");

    Jogo colecao[arrSize]{
        { "Chrono Trigger", 100 },
        { "Minecraft", 200 },
        { "Terraria", 300 },
        { "Counter Strike 2", 400 },
    };

    colecao[0].jogar(1);
    colecao[1].jogar(100);
    colecao[2].jogar(3);
    colecao[3].jogar(101);


    //Verifica o jogo mais jogado
    Jogo* maisJogado = &colecao[0];
    for (size_t i = 1; i < arrSize; i++)
    {
        if (colecao[i].getHoras() > maisJogado->getHoras())
            maisJogado = &colecao[i];
    }

    //Verifica o jogo com menor preco
    Jogo* menorPreco = &colecao[0];
    for (size_t i = 1; i < arrSize; i++)
    {
        if (colecao[i].getPreco() < menorPreco->getPreco())
            menorPreco = &colecao[i];
    }

    //Verifica o jogo com menor preco
    Jogo* menorCusto = &colecao[0];
    for (size_t i = 1; i < arrSize; i++)
    {
        if (colecao[i].getCusto() < menorCusto->getCusto())
            menorCusto = &colecao[i];
    }

    for (size_t i = 0; i < arrSize; i++) 
    {
        colecao[i].exibir();
    }

    cout << "\nO jogo com menor preço:\n";
    menorPreco->exibir();

    cout << "\nO jogo mais jogado:\n";
    maisJogado->exibir();

    cout << "\nO jogo com menor custo:\n";
    menorCusto->exibir();

    return 0;
}

