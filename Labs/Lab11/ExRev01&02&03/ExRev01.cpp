#include "VetorEncapsulado.h"
#include <iostream>
using namespace std;

int main()
{
	VetorEncapsulado A{ 10, 10 };
	VetorEncapsulado B{ 20, 20 };

	cout << "Coordenadas Retangulares\n";
	cout << "------------------------\n";
	A.exibir();
	cout << endl;
	B.exibir();
	cout << endl;

	A.SetCoord(VetorEncapsulado::POL);
	B.SetCoord(VetorEncapsulado::POL);

	cout << "\nCoordenadas Polares\n";
	cout << "-------------------\n";
	A.exibir();
	cout << endl;
	B.exibir();
	cout << endl;

	cout << "\nOperacoes com Vetores\n";
	cout << "-----------------------\n";
	cout << "A + B = ";
	A.adicionar(B).exibir();
	cout << endl;

	cout << "A - B = ";
	A.subtrair(B).exibir();
	cout << endl;

	cout << "2 * A = ";
	A.multiplicar(2).exibir();
	cout << endl;

	cout << "A * 2 = ";
	A.multiplicar(2).exibir();
	cout << endl;

	cout << "-A = ";
	A.inverter().exibir();
	cout << endl;

	cout << "-B = ";
	B.inverter().exibir();
	cout << endl;

}