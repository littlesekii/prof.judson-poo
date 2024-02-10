#include <iostream>
#include "Vetor.h"
#include "random"
#include "ctime"

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	srand(time(0));

	Vetor posMosca{};

	const int maxMagnitude = 10;
	const int maxAngulo = 360;

	cout << "Entre com a distância: ";
	double distancia;
	cin >> distancia;

	int steps{};
	while (posMosca.mag < distancia)
	{
		int magnitude = rand() % maxMagnitude;
		int angulo = rand() % maxAngulo;
		posMosca = posMosca + Vetor(magnitude, angulo, Vetor::POL);
		steps++;
	}

	cout << "----------------------------------------------\n";
	cout << "Foram " << steps << " passos de simulação para chegar em:\n";
	cout << posMosca << endl;
	posMosca.SetCoord(Vetor::POL);
	cout << posMosca << endl;
	cout << "----------------------------------------------\n";

	cout << "Distância média por passo: " << posMosca.mag / steps;

}
