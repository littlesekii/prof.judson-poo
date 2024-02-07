#include "Lista.h"
#include <iostream>

Lista::Lista(int tam)
{
    this->itens = new Item[tam];
    this->max = tam;
    this->size = 0;
}

Lista::~Lista()
{
    delete[] this->itens;
}

bool Lista::Vazia() const
{
    return !this->size;
}

bool Lista::Cheia() const
{
    return this->size == this->max;
}

bool Lista::Adicionar(const Item& item)
{
	if (this->size >= this->max)
		return false;

	this->itens[this->size++] = item;
	return true;
}

Item Lista::operator[](size_t index)
{
    if (index >= this->size)
    {
        std::cout << "O índice selecionado não existe: ";
        return -1;
    }
        

    return itens[index];
}