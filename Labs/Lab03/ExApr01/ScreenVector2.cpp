#include "ScreenVector2.h"
#include <iostream>

void ScreenVector2::translate(int dx, int dy)
{
	int translateX = x + dx;
	int translateY = y + dy;
	translateX = translateX - screenWidth * int(translateX / screenWidth);
	translateY = translateY - screenHeight * int(translateY / screenHeight);

	x = translateX;
	y = translateY;
}

void ScreenVector2::moveTo(int px, int py)
{
	px = px - screenWidth * int(px / screenWidth);
	py = py - screenHeight * int(py / screenHeight);

	x = px;
	y = py;
}

void ScreenVector2::exibir()
{
	std::cout << "X: " << x << std::endl << "Y: " << y << std::endl;
}
