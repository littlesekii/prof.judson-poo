#pragma once
class Tempo
{

private:
	int horas;
	int minutos;

	int clamp(int totalMinutos);

public:
	Tempo();
	Tempo(int horas, int minutos = 0);

	void exibir() const;


	Tempo operator+(const Tempo& t);
	Tempo operator-(const Tempo& t);

	Tempo operator*(int t);
	Tempo operator+(int t);

	const Tempo& operator+=(const Tempo& t);
	const Tempo& operator-=(const Tempo& t);

};

inline int Tempo::clamp(int totalMinutos)
{
	const int MAX_MINUTOS = 24 * 60;

	if (totalMinutos >= MAX_MINUTOS)
	{
		totalMinutos = totalMinutos - MAX_MINUTOS * (totalMinutos / MAX_MINUTOS);
	}
	else if (totalMinutos < 0)
	{
		totalMinutos = clamp(MAX_MINUTOS + totalMinutos);
	}

	return totalMinutos;
}
