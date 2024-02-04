#include <iostream>
#include "Atleta.h"
using namespace std;

const size_t arrSize = 4;

int main()
{
    system("chcp 1252 > pg");

    Atleta rick{ "Rick", 10, 10 };
    Atleta john{ "john", 10, 16 };
    Atleta mark{ "mark", 12, 15 };
    Atleta luis{ "luis", 15, 20 };

    Atleta time[arrSize]{
        rick,
        john,
        mark,
        luis,
    };

    Atleta* maisEficiente = time;
    for (size_t i = 1; i < arrSize; i++)
    {
        if (!maisEficiente->comparar(time[i]))
            maisEficiente = &time[i];
    }

    Atleta* menosEficiente = time;
    for (size_t i = 1; i < arrSize; i++)
    {
        if (menosEficiente->comparar(time[i]))
            menosEficiente = &time[i];
    }

    for (size_t i = 0; i < arrSize; i++)
    {
        time[i].exibir(); 
        cout << endl;
    }


    cout << "\nO atleta mais eficiente do time:\n"; 
    maisEficiente->exibir();

    cout << "\nO atleta menos eficiente do time:\n";
    menosEficiente->exibir();
   
    return 0;
}

