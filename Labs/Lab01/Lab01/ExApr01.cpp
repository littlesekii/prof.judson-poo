class ContaBancaria
{

private:
	char nomeCliente[101];
	int numero;
	float saldo;

public:
	void cadastro(char*, int, float);
	void exibir();

	void depositar(float);
	void sacar(float);

};