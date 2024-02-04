#include <string>
using std::string;

// -----------------------------------------------
// Declara��o da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome;                                        // nome do jogo
	float preco;                                        // pre�o do jogo
	int horas;                                          // quantidade de horas jogadas
	float custo;                                        // valor por hora jogada

	void calcular();                                    // calcular custo da hora jogada

public:
	Jogo();												// construtor padr�o
	Jogo(const string& titulo, float valor = 0);		// construtor da classe
	~Jogo();											// destrutor

	void atualizar(float valor);                        // atualizar pre�o do jogo
	void jogar(int tempo);                              // registrar horas jogadas
	void exibir();                                      // mostrar informa��es

	int getHoras() const;
	float getPreco() const;
	float getCusto() const;
};

// -----------------------------------------------
// M�todos Inline
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