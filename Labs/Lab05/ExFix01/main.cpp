#include "Pessoa.h"

int main()
{
	system("chcp 1252 > nil");

	Pessoa fulano;
	fulano.Exibir();
	fulano.Formal();

	Pessoa joao{ "João" };
	joao.Exibir();
	joao.Formal();

	Pessoa davi{ "Davi", "Bacalhau" };
	davi.Exibir();
	davi.Formal();

	Pessoa FHT = Pessoa("Flávia", "Helena Tavares");
	FHT.Exibir();
	FHT.Formal();

	return 0;
}