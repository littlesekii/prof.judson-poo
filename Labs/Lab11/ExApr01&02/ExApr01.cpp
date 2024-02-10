#include <iostream>
#include "Complexo.h"

using namespace std;

int main()
{
	system("chcp 1252 > nil");
	
	cout << "Digite dois números complexos:\n";

	int real, imaginario;

	cin >> real;
	cin >> imaginario;
	cin.ignore();

	Complexo a{ real, imaginario };
	
	cin >> real;
	cin >> imaginario;
	cin.ignore();

	Complexo b{ real, imaginario };

	cout << "Complexo B: ";
	b.exibir();
	cout << endl;

	
	cout << "Seu conjugado: ";
	b.conjugado().exibir();
	cout << endl;

	cout << "Complexo A: ";
	a.exibir();
	cout << endl;

	cout << "a + b: ";
	a.soma(b).exibir();
	cout << endl;

	cout << "a - b: ";
	a.subtracao(b).exibir();
	cout << endl;

	cout << "a * b: ";
	a.multiplicacao(b).exibir();
	cout << endl;

	cout << "2 * b: ";
	b.multiplicacao(2).exibir();
	cout << endl;
}
