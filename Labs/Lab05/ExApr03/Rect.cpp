#include <iostream>
#include "Rect.h"

Rect::Rect() {};

Rect::Rect(Point& p1, Point& p2)
{
	a = p1;
	b = p2;
}

Rect::Rect(int ax, int ay, int bx, int by)
{
	a.MoveTo(ax, ay);
	b.MoveTo(bx, by);
}

void Rect::Translate(int dx, int dy)
{
	a.Translate(dx, dy);
	b.Translate(dx, dy);
}

void Rect::Print()
{
	std::cout << "Rect: \n";
	std::cout << "(A) ";
	a.Print();
	std::cout << "(B) ";
	b.Print();
	std::cout << '\n';
}
