using Item = int;

#pragma once
class Lista
{

private:
    Item* itens;
    int size;
    int max;

public:
    Lista(int tam);
    ~Lista();

    bool Vazia() const;
    bool Cheia() const;
    bool Adicionar(const Item& item);

    Item operator[](size_t index);
 
};

