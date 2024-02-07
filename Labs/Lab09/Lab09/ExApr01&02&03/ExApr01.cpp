#include <iostream>
#include "Tempo.h"

using namespace std;

int main()
{
    system("chcp 1252 > nil");

    Tempo a{ 2, 30 };
    Tempo b{ 1, 10 };
    Tempo c{ 3, 40 };

    if (a == b) cout << "iguais" << endl;
    if (a + b == c) cout << "iguais" << endl;

    return 0;
}