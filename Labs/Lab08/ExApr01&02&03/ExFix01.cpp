#include <iostream>
#include "Pilha.h"
#include <cstring>
using namespace std;

bool palindromo(const char*);

int main()
{
	system("chcp 1252 > pg");

	cout << "Digite uma palavra: ";
	char palavra[30];
	cin.getline(palavra, 30);

	if (palindromo(palavra))
		cout << "A palavra é um palíndromo.";
	else
		cout << "A palavra não é um palíndromo.";

	return 0;
}

bool palindromo(const char* palavra)
{
	bool isPalindromo = true;

	Pilha pilha;

	int tamanhoPalavra = strlen(palavra);
	for (size_t i = 0; i < tamanhoPalavra; i++)
	{
		pilha.Empilhar(palavra[i]);
	}


	cout << "Empilhando e desempilhando fica: ";
	for (size_t i = 0; i < tamanhoPalavra; i++)
	{
		char caractereAtual;
		pilha.Desempilhar(caractereAtual);
		cout << caractereAtual;

		if (isPalindromo && caractereAtual != palavra[i])
			isPalindromo = false;
	}
	cout << endl;

	return isPalindromo;
}