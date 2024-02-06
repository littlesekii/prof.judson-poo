#include "Lista.h"

Lista::Lista(size_t tamanhoMaximo)
{
    itens = new Item[tamanhoMaximo];

    this->tamanhoMaximo = tamanhoMaximo;
    quantidadeItens = 0;
}

Lista::~Lista()
{
    delete[] itens;
}

bool Lista::adicionar(Item& item)
{
    if (quantidadeItens >= tamanhoMaximo)
        return false;

    itens[quantidadeItens++] = item;    
    return true;
}

void Lista::visitar(void(*fn)(Item&))
{
    for (size_t i = 0; i < quantidadeItens; i++)
    {
        (*fn)(itens[i]);
    }
}

bool Lista::cheia()
{
    return quantidadeItens == tamanhoMaximo;
}

bool Lista::vazia()
{
    return !quantidadeItens;
}
