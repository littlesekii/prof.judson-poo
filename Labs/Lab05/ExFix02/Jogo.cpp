#include "Jogo.h"
#include <iostream>
using namespace std;

// -----------------------------------------------
// Defini��o da Classe Jogo
// -----------------------------------------------

Jogo::Jogo() 
{
    nome = "";
    preco = 0.0f;
    horas = 0;
    custo = preco;
};

Jogo::Jogo(const string& titulo, float valor)
{
    nome = titulo;
    preco = valor;
    horas = 0;
    custo = preco;
}

void Jogo::atualizar(float valor)
{
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo)
{
    horas = horas + tempo;
    calcular();
}

void Jogo::exibir()
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
        << preco << " "
        << horas << "h = R$"
        << custo << "/h\n";
}

// -----------------------------------------------