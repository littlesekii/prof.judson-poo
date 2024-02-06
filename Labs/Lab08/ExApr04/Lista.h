#pragma once

using Item = int;

class Lista
{

private:

	Item* itens;

	size_t tamanhoMaximo;
	size_t quantidadeItens;

public:
	Lista(size_t tamanhoMaximo);
	~Lista();

	bool adicionar(Item& item);

	void visitar(void (*fn)(Item&));

	bool cheia();
	bool vazia();
};

