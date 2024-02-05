#include "Pilha.h"

// -----------------------------------------------
// Definição da Classe Pilha
// -----------------------------------------------

/*Desafio*/
//Pilha::Pilha(int size)
//{
//	itens = new Item[size];
//	this->size = size;
//	topo = 0;
//}

Pilha::Pilha()
{
	topo = 0;
	size = 10;
	itens = new Item[size];
}

Pilha::~Pilha()
{
	delete[] itens;
}

bool Pilha::Vazia() const
{
	return !topo;
}

/*Desafio*/
//bool Pilha::Cheia() const
//{
//	return topo == size;
//}

/*Desafio*/
//bool Pilha::Empilhar(const Item& item)
//{
//	if (topo < size)
//	{
//		itens[topo++] = item;
//		return true;
//	}
//
//	return false;
//}

void Pilha::Empilhar(const Item& item)
{
	if (topo >= size)
	{
		//copia os valores da pilha para um vetor temporário
		Item* temp = new Item[size];
		for (size_t i = 0; i < size; i++)
		{
			temp[i] = itens[i];
		}

		//deleta o vetor dinamico da pilha
		delete[] itens;
		itens = new Item[size + 10];		

		//copia os valores da temp para a nova pilha
		for (size_t i = 0; i < size; i++)
		{
			itens[i] = temp[i];
		}
		//deleta o valor dinâmico da temp
		delete[] temp;

		//ajusta o novo tamanho
		this->size += 10;
	}
	//insere o novo elemento na pilha
	itens[topo++] = item;
}

bool Pilha::Desempilhar(Item& item)
{
	if (topo > 0)
	{
		item = itens[--topo];
		return true;
	}

	return false;
}

// -----------------------------------------------