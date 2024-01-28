#include "Vector2.h"
#include <iostream>

void Vector2::translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Vector2::moveTo(int px, int py)
{
	x = px;
	y = py;
}

void Vector2::exibir()
{
	std::cout << "X: " << x << std::endl << "Y: " << y << std::endl;
}
