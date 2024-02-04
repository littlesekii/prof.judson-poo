#include "Atleta.h"
#include <iostream>
using namespace std;

int main()
{

	Atleta rick{ 13, 14 };
	Atleta john{ 10, 16 };
	Atleta mark{ 7, 9 };

	Atleta davi{ 4, 4 };
	Atleta time;

	cout << "\nExibindo rick...\n";
	rick.exibir();
	cout << "\nExibindo john...\n";
	john.exibir();
	cout << "\nExibindo mark...\n";
	mark.exibir();
	cout << "\nExibindo time...\n";
	time.exibir();

	cout << "\nExibindo Davi...\n";
	davi.exibir();

	cout << "\nExibindo Davi...\n";
	davi.acumular(0, 1);
	davi.exibir();

	time.acumular(rick);
	time.acumular(john);
	time.acumular(mark);
	time.acumular(davi);

	cout << "\nExibindo time...\n";
	time.exibir();

	return 0;
}