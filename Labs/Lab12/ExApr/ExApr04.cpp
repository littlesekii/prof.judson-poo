#include <iostream> 
#include "Real.h" 
#include "Dolar.h" 
using namespace std;

int main()
{

	Dolar ganhos = 100;
	Real carteira;

	carteira = ganhos;
	cout << carteira << endl;

	// converte int para Dólar 
	// converte de Dólar para Real  
	// mostra valor em Reais 
	carteira = carteira + Dolar{ 25 };
	cout << carteira << endl;
	// mostra valor em Reais ]
}
