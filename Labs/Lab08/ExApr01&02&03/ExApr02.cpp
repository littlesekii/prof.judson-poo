#include <iostream>
#include "Pilha.h"
#include <cstring>
using namespace std;


void verificaParenteses(const char*);

int main()
{
	system("chcp 1252 > pg");

	while (true)
	{
		cout << "Express�o: ";
		char expressao[30];
		cin.getline(expressao, 30);

		verificaParenteses(expressao);
		cout << endl << endl;
	}

	return 0;
}

void verificaParenteses(const char* expressao)
{
	Pilha stack;

	for (size_t i = 0; i < strlen(expressao); i++)
	{
		if (expressao[i] == '(')
			stack.Empilhar(expressao[i]);
		else if (expressao[i] == ')')
		{
			char aux;
			if (!stack.Desempilhar(aux)) 
			{
				cout << "[Erro] Par�ntese n�o foi aberto.";
				return;
			}
		}
	}

	if (stack.Vazia())
		cout << "[OK] Par�nteses corretos";
	else
		cout << "[Erro] Par�ntese n�o foi fechado.";
}