#pragma once
#include <string>

using namespace std;

class Jogo
{
private:
	string nome;   // nome do jogo 
	float preco;   // preço do jogo 
	int horas;
	// quantidade de horas jogadas    
	float custo;   // valor por hora jogada 
	void calcular()
	{
		if (horas > 0)
			custo = preco / horas;
	}

public:
	Jogo(const string& titulo = "Nenhum", float valor = 0);
	void atualizar(float valor);
	void jogar(int tempo);
	void exibir();
};