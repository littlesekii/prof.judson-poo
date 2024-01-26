#include <iostream>
#include "ContaBancaria.h"

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	ContaBancaria conta;

	conta.cadastro("Davi Bacalhau", 6542423);

	conta.exibir();

	conta.depositar(20'000);

	conta.exibir();

	conta.sacar(15'000);

	conta.exibir();

	return 0;
}

