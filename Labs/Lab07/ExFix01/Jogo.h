#include <string>
using std::string;

// -----------------------------------------------
// Declaração da Classe Jogo
// -----------------------------------------------

class Jogo
{
	typedef const Jogo& (*Metodo)(const Jogo&, const Jogo&);
private:
	string nome;									// nome do jogo
	float preco;									// preço do jogo
	int horas;										// quantidade de horas jogadas
	float custo;									// valor por hora jogada

	void calcular();								// calcular custo da hora jogada

public:
	Jogo();											// construtor padrão
	Jogo(const string& titulo,						// construtor da classe
		float valor = 0,
		int tempo = 0);
	~Jogo();										// destrutor

	const Jogo& comparar(const Jogo& jogo, Metodo m) const;	// compara dois jogos

	void atualizar(float valor);					// atualizar preço do jogo
	void jogar(int tempo);							// registrar horas jogadas
	void exibir() const;							// mostrar informações

	int Horas() const;
	float Custo() const;
};

// -----------------------------------------------
// Métodos Inline
// -----------------------------------------------

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}

inline int Jogo::Horas() const
{
	return horas;
}

inline float Jogo::Custo() const
{
	return custo;
}

// -----------------------------------------------

// ----------------------------------------------- 
// Funções Auxiliares 
// ----------------------------------------------- 

const Jogo& MaisJogado(const Jogo& a, const Jogo& b);
const Jogo& MenorCusto(const Jogo& a, const Jogo& b);