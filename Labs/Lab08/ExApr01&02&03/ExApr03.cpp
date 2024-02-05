#include <iostream>
#include "Pilha.h"
#include <cstring>
#include <cctype>
using namespace std;


float calculaPolonesaReversa(const char*);

int main()
{
	system("chcp 1252 > pg");

	while (true)
	{
		cout << "Expressão: ";
		char expressao[30];
		cin.getline(expressao, 30);

		cout << calculaPolonesaReversa(expressao);
		cout << endl << endl;
	}

	return 0;
}

float calculaPolonesaReversa(const char* expressao)
{
	Pilha pilha;

	float resultado{};

	for (size_t i = 0; i < strlen(expressao); i++)
	{
		char c = expressao[i];
		char cs[2]{ c, '\0' };
		if (isdigit(c))
			pilha.Empilhar(atoi(cs));
		else if (ispunct(c))
		{
			
			float operando[2];
			pilha.Desempilhar(operando[1]);
			pilha.Desempilhar(operando[0]);				

			switch (c)
			{
				case'+':
				{
					resultado = operando[0] + operando[1];
					break;
				}
				case'-':
				{
					resultado = operando[0] - operando[1];
					break;
				}
				case'*':
				{
					resultado = operando[0] * operando[1];
					break;
				}
				case'/':
				{
					resultado = operando[0] / operando[1];
					break;
				}
			
			}
			pilha.Empilhar(resultado);
		}
	}
	return resultado;
}