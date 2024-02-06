#include <iostream>
#include "Lista.h"

void mostrar(int& value);
void dobrar(int& value);

int main()
{
	Lista list{5};

	int valor = 10;

	list.adicionar(valor);
	valor = 40;
	list.adicionar(valor);
	list.adicionar(valor);
	list.adicionar(valor);
	list.adicionar(valor);


	list.visitar(mostrar);

	list.visitar(dobrar);
	list.visitar(mostrar);

	std::cout << list.vazia() << '\n';
	std::cout << list.cheia();

	return 0;
}

void mostrar(int& value)
{
	std::cout << value << "\n";
}

void dobrar(int& value)
{
	value *= 2;
}