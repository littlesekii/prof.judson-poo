#include "Jogo.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Inicializa:\n";
	{
		// inicializa��o do objeto
		Jogo sackboy = Jogo("Sackboy", 150.0f);
	}

	cout << "\nCria e Atribui:\n";
	{
		// cria��o do objeto
		Jogo horizon;
		horizon = Jogo("Horizon", 199.0f);
	}
}