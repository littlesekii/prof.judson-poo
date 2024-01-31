#include "Point.h"

//b
//inline int Point::X() { return x; }
//inline int Point::Y() { return y; }

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
