
// defini��o do tipo Item
//using Item = char;
using Item = float;

// ----------------------------------
// Declara��o da Classe Pilha
// ----------------------------------

class Pilha
{
private:
	Item* itens;							// armazenamento de itens
	int size;								// limite de itens
	int topo;                               // �ndice do item no topo

	void Expandir();

public:
	/*Desafio*/
	//Pilha(int size);                      // construtor
	Pilha();								// construtor
	~Pilha();								// destrutor
	bool Vazia() const;                     // verifica se a pilha est� vazia

	/*Desafio*/
	//bool Cheia() const;                   // verifica se a pilha est� cheia
	/*Desafio*/
	//bool Empilhar(const Item& item);		// adiciona item na pilha		

	void Empilhar(const Item& item);		// adiciona item na pilha									
	bool Desempilhar(Item& item);			// remove item da pilha

};

// ----------------------------------