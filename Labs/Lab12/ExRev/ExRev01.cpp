#include <iostream>
#include "Tempo.h"
using namespace std;

int main()
{
	//Tempo t{ 4, 12 };

	//double horas = t;    // convers�o impl�cita 

	//cout << "Converte para double => " << horas << " horas\n";
	//cout << "Converte para int => " << int(t) << " horas\n";
	//cout << "Usa operator<< => " << t << "\n";


	Tempo t{ 4, 25 };
	cout << t << '\n';
	t = 3;
	cout << t << '\n';
} 