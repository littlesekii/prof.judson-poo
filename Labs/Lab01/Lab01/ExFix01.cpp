#include <iostream>

using namespace std;

struct Jogo
{
	string nome; // nome do jogo
	float preco; // preço do jogo
	int horas; // quantidade de horas jogadas 
	float custo; // valor por hora jogada
};

Jogo adquirir(const string& titulo, float valor);
void atualizar(Jogo& jogo, float valor);
void jogar(Jogo& jogo, int tempo);
void exibir(const Jogo& jogo);

int main()
{
	system("chcp 1252 > nil");

	Jogo mine = adquirir("Minecraft", 100);

	exibir(mine);
	cout << endl;

	atualizar(mine, 99.90);

	exibir(mine);
	cout << endl;

	jogar(mine, 30);

	exibir(mine);
	cout << endl;

	atualizar(mine, 120);

	exibir(mine);
	cout << endl;

	jogar(mine, 3000);

	exibir(mine);
	cout << endl;
}

Jogo adquirir(const string& titulo, float valor)
{
	Jogo jogo = { 
		titulo, 
		valor, 
		0, 
		valor 
	};

	return jogo;
}

void atualizar(Jogo& jogo, float valor)
{
	jogo.preco = valor;
	jogo.custo = valor;

	if (jogo.horas > 0)
		jogo.custo = jogo.preco / jogo.horas;
}

void jogar(Jogo& jogo, int tempo)
{
	jogo.horas += tempo;

	if (jogo.horas > 0)
		jogo.custo = jogo.preco / jogo.horas;
}

void exibir(const Jogo& jogo)
{
	cout << "Jogo: " << jogo.nome << endl;
	cout << "Preço: " << jogo.preco << endl;
	cout << "Horas jogadas: " << jogo.horas << endl;
	cout << "Preço/Hora: " << jogo.custo << endl;
}
