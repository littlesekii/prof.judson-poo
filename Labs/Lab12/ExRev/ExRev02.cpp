#include <iostream>
#include "Tempo.h"
using namespace std;

int main()
{
	Tempo a = Tempo(2, 10);
	Tempo b(2, 10);
	Tempo c = Tempo{ 2,10 };
	Tempo d{ 2,10 };


	int ai = int(a);
	int bi = int(b);
	int ci = int(c);
	int di = int(d);

	double ad = double(a);
	double bd = double(b);
	double cd = double(c);
	double dd = double(d);

	cout << ai << " " << bi << " " << ci << " " << di << "\n";
	cout << ad << " " << bd << " " << cd << " " << dd << "\n";
}