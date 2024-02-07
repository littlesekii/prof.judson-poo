#include <iostream>
#include "Tempo.h"
#include <thread>

using namespace std;

int main()
{
	//Tempo horario{ 1, 0 };

	//horario.exibir();
	//cout << endl << endl;

	///*while (true)
	//{*/
	//	horario = horario * 24;
	//	horario.exibir();
	//	cout << endl;

	//	horario = horario + 5 * 60;
	//	horario.exibir();
	//	cout << endl;

	//	horario = horario + (horario + -(2 * 60));
	//	horario.exibir();
	//	cout << endl;

	//	horario = horario - (horario + -(6 * 60));
	//	horario.exibir();
	//	cout << endl;

	//	using namespace std::this_thread; // sleep_for, sleep_until
	//	sleep_for(1000ns);
	//}
	

	Tempo a{ 2, 30 };
	Tempo b{ 1, 10 };
	Tempo c{ 0, 20 };
	Tempo total = a + b - c;
	total.exibir();
	cout << endl;
	total = total + 2;
	total.exibir();
	cout << endl;

	total = total * 2;
	total.exibir();
	cout << endl;



	return 0;
}