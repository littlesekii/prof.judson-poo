#include <string>
using std::string;

// -----------------------------------------------
// Declaração da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome;                                        // nome do jogo
	float preco;                                        // preço do jogo
	int horas;                                          // quantidade de horas jogadas
	float custo;                                        // valor por hora jogada

	void calcular();                                    // calcular custo da hora jogada

public:
	Jogo();												// construtor padrão
	Jogo(const string& titulo, float valor = 0);		// construtor da classe
	~Jogo();											// destrutor

	void atualizar(float valor);                        // atualizar preço do jogo
	void jogar(int tempo);                              // registrar horas jogadas
	void exibir();                                      // mostrar informações

	int getHoras() const;
	float getPreco() const;
	float getCusto() const;
};

// -----------------------------------------------
// Métodos Inline
// -----------------------------------------------

inline int Jogo::getHoras() const
{
	return horas;
}

inline float Jogo::getPreco() const
{
	return preco;
}

inline float Jogo::getCusto() const
{
	return custo;
}

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}

// -----------------------------------------------