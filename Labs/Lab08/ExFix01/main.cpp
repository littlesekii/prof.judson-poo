#include <iostream>
#include "Pilha.h"
using namespace std;

int main()
{
	Pilha pilha;

	pilha.Empilhar(11);
	pilha.Empilhar(10);
	pilha.Empilhar(9);
	pilha.Empilhar(8);
	pilha.Empilhar(7);
	pilha.Empilhar(6);
	pilha.Empilhar(5);
	pilha.Empilhar(4);
	pilha.Empilhar(3);
	pilha.Empilhar(2);
	pilha.Empilhar(1);
	pilha.Empilhar(0);


	while (!pilha.Vazia())
	{
		Item i;
		pilha.Desempilhar(i);
		cout << i << endl;
	}

	return 0;
}