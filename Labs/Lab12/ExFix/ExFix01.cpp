#include <iostream>
#include "Tempo.h"
using namespace std;

int main()
{

	Tempo a{ 1,10 };
	Tempo b, c;
	b = a + 2;
	c = 2 + a;
	cout << b << endl;
	cout << c << endl;

}