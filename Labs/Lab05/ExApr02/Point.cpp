#include "Point.h"
#include <iostream>

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int ix, int iy)
{
	x = ix;
	y = iy;
}

void Point::MoveTo(int px, int py)
{
	x = px;
	y = py;
}

void Point::Translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Point::Print()
{
	std::cout << "X: " << x << " " << "Y: " << y << '\n';
}
