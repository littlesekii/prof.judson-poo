#include <iostream>
#include "Jogo.h"

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	Jogo mine;
	
	mine.adquirir("Minecraft", 100);

	mine.exibir();
	cout << endl;

	mine.atualizar(99.90);

	mine.exibir();
	cout << endl;

	mine.jogar(30);

	mine.exibir();
	cout << endl;

	mine.atualizar(120);

	mine.exibir();
	cout << endl;

	mine.jogar(3000);

	mine.exibir();
	cout << endl;
}

