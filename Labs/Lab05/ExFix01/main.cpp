#include "Pessoa.h"

int main()
{
	system("chcp 1252 > nil");

	Pessoa fulano;
	fulano.Exibir();
	fulano.Formal();

	Pessoa joao{ "Jo�o" };
	joao.Exibir();
	joao.Formal();

	Pessoa davi{ "Davi", "Bacalhau" };
	davi.Exibir();
	davi.Formal();

	Pessoa FHT = Pessoa("Fl�via", "Helena Tavares");
	FHT.Exibir();
	FHT.Formal();

	return 0;
}