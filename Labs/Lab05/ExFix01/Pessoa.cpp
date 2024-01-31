#include <iostream>
#include "Pessoa.h"
using std::cout;


Pessoa::Pessoa()
{
	nome_ = "Fulano";
	sobrenome_ = "Da Silva";
}

Pessoa::Pessoa(const string& nome, const string& sobrenome)
{
	nome_ = nome;
	sobrenome_ = sobrenome;
}

void Pessoa::Exibir()
{
	cout << nome_ << '\n';
}

void Pessoa::Formal()
{
	cout << nome_ << " " << sobrenome_ << '\n';
}
