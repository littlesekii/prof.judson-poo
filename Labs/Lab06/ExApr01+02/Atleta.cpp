#include "Atleta.h"
#include <iostream>

Atleta::Atleta()
{
	_acertos = 0;
	_tentativas = 0;
	_percentual = 0.f;
}

Atleta::Atleta(int acertos, int tentativas)
{
	_acertos = acertos;
	_tentativas = tentativas;
	calcular();
}

Atleta::~Atleta()
{
}

void Atleta::acumular(int acertos, int tentativas)
{
	_acertos += acertos;
	_tentativas += tentativas;
	calcular();
}

void Atleta::acumular(Atleta& atleta)
{
	_acertos += atleta._acertos;
	_tentativas += atleta._tentativas;
	calcular();
}

void Atleta::exibir() const
{
	std::cout << "Tentativas: " << _tentativas << '\n';
	std::cout << "Acertos: " << _acertos << '\n';
	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << "Percentual: " << _percentual << "% \n";
}
