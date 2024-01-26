#include "Jogo.h"


void Jogo::adquirir(const string& titulo, float valor)
{
	nome = titulo;
	preco = valor;
	horas = 0;
	custo = valor;
}

void Jogo::atualizar(float valor)
{
	preco = valor;
	custo = valor;

	if (horas > 0)
		custo = preco / horas;
}

void Jogo::jogar(int tempo)
{
	horas += tempo;

	if (horas > 0)
		custo = preco / horas;
}

void Jogo::exibir() const
{
	cout << "Jogo: " << nome << endl;
	cout << "Preço: " << preco << endl;
	cout << "Horas jogadas: " << horas << endl;
	cout << "Preço/Hora: " << custo << endl;
	
}
