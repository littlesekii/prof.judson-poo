#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    system("chcp 1252 > nil");

    Lista lista{ 5 };
    lista.Adicionar(2); lista.Adicionar(3); lista.Adicionar(6);
    cout << lista[0];  // deve exibir 2 
    cout << endl;
    cout << lista[3];  // deve exibir 0 e mensagem de erro 

    return 0;
}