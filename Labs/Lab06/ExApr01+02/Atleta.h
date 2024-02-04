#pragma once
class Atleta
{
private:
	int _acertos;
	int _tentativas;
	float _percentual;

	inline void calcular();

public:
	Atleta();
	Atleta(int acertos, int tentativas);

	~Atleta();

	void acumular(int acertos, int tentativas);
	void acumular(Atleta& atleta);
	void exibir() const;

};

inline void Atleta::calcular()
{	
	_percentual = (_tentativas != 0) ? (100.0f * _acertos / _tentativas) : 0;
}




