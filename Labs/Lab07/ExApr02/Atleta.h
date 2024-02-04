#pragma once
class Atleta
{
private:
	char nome[30];
	int _acertos;
	int _tentativas;
	float _percentual;

	inline void calcular();

public:
	Atleta();
	Atleta(const char * nome, int acertos, int tentativas);

	~Atleta();

	void acumular(int acertos, int tentativas);
	void acumular(Atleta& atleta);
	void exibir() const;

	bool comparar(Atleta& atleta) const;

};

inline void Atleta::calcular()
{
	_percentual = (_tentativas != 0) ? (100.0f * _acertos / _tentativas) : 0;
}

inline bool Atleta::comparar(Atleta& atleta) const
{
	return this->_percentual > atleta._percentual;
}