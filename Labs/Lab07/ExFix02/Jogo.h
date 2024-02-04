#include <string>
using std::string;

struct Jogo
{
	string nome;								
	float preco;								
	int horas;									
	float custo;												
};

void calcular(Jogo* este);
void atualizar(Jogo* este, float valor);
void jogar(Jogo* este, int tempo);
void exibir(const Jogo* este);
