#include <iostream>
#include "Packet.h"

using namespace std;

int main()
{
    system("chcp 1252 > nil");

    Packet packet;

    cout << "Empacotando..." << endl;
    packet[0] = 1;
    packet[1] = 2;
    packet[2] = 3;
    packet[3] = 4;

    cout << "Enviando pacote..." << endl;
    cout << "Recebendo pacote..." << endl;

    cout << "Desempacotando..." << endl;
    short a = 0, b = 0, c = 0, d = 0;
    a = packet[0];
    b = packet[1];
    c = packet[2];
    d = packet[3];
    cout << a << b << c << d << endl;

    return 0;
}