#include <iostream>
#include "Packet.h"

using namespace std;

int main()
{
    Packet packet;

    cout << "Empacotando..." << endl;
    packet.begin();
    packet << 9;
    packet << 4;
    packet << 3;
    packet << 7;
    packet.end();

    cout << "Enviando pacote..." << endl;
    packet.send();
    cout << endl;
    cout << "Recebendo pacote..." << endl;

    cout << "Desempacotando..." << endl;
    short a = 0, b = 0, c = 0, d = 0;
    packet.begin();
    packet >> a;
    packet >> b;
    packet >> c;
    packet >> d;
    packet.end();
    cout << a << b << c << d << endl;




	return 0;
}