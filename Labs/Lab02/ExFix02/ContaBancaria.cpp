#include "ContaBancaria.h"

void ContaBancaria::cadastro(const char* nome, int numero)
{
	strcpy_s(nomeCliente, nome);
	conta = numero;
	saldo = 0;
}

void ContaBancaria::exibir() const
{
	cout << "Nome: " << nomeCliente << endl;
	cout << "Conta: " << conta << endl;
	cout << "Saldo: " << saldo << endl;
	cout << endl;
}

void ContaBancaria::depositar(float valor)
{
	saldo += valor;
}

void ContaBancaria::sacar(float valor)
{
	saldo -= valor;
}
