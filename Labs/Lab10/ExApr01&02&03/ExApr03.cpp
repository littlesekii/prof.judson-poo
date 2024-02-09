#include <iostream>
#include "Tempo.h"

using namespace std;


int main()
{
    Tempo passeio{ 3, 15 };
    passeio >> cout;

    return 0;
}