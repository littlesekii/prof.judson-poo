#include <iostream>
#include "Tempo.h"
#include <thread>

using namespace std;

int main()
{

	Tempo a{ 2, 30 };
	Tempo b{ 1, 10 };
	Tempo c{ 0, 20 };

	Tempo d{ 5, 30 };
	Tempo total;
	total += a;
	total.exibir();
	cout << endl;
	total += b;
	total.exibir();
	cout << endl;
	total -= c;
	total.exibir();
	cout << endl;

	total -= d;
	total.exibir();
	cout << endl;


	return 0;
}