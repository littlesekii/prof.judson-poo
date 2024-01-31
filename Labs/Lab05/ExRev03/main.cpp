#include "Jogo.h"

int main()
{

	Jogo jogo1A;
	Jogo jogo1B{};
	Jogo jogo1C = Jogo();
	
	Jogo jogo2A("Devil May Cry");
	Jogo jogo2B{ "Devil May Cry" };
	Jogo jogo2C = Jogo("Devil May Cry");

	Jogo jogo3A("Devil May Cry", 169.99);
	Jogo jogo3B{ "Devil May Cry", 169.99 };
	Jogo jogo3C = Jogo("Devil May Cry", 169.99);

	jogo1A.exibir();
	jogo1B.exibir();
	jogo1C.exibir();

	jogo2A.exibir();
	jogo2B.exibir();
	jogo2C.exibir();

	jogo3A.exibir();
	jogo3B.exibir();
	jogo3C.exibir();

	return 0;
}