#include <iostream>
#include "Vector2.h"

struct Position
{
	int x;
	int y;

	void translate(int, int);
	void moveTo(int, int);
	void exibir();
};

void Position::translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Position::moveTo(int px, int py)
{
	x = px;
	y = py;
}

void Position::exibir()
{
	std::cout << "X: " << x << std::endl << "Y: " << y << std::endl;
}

int main() 
{
	Position position;

	position.x = 10;
	position.y = 10;

	position.exibir();

	position.translate(5, 2);

	position.exibir();

	position.moveTo(5, 2);

	position.exibir();

	return 0;
}