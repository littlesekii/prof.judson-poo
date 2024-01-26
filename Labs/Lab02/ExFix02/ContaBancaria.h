#include <cstring>
#include <iostream>
using namespace std;

class ContaBancaria
{

private:
	char nomeCliente[101];
	int conta;
	float saldo;

public:
	void cadastro(const char*, int);
	void exibir() const;

	void depositar(float);
	void sacar(float);

};