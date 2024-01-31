#include "Rect.h"

int main()
{
	Rect rect;

	rect.Print();

	Rect rect2{ 5, 5, 10, 10 };

	rect2.Print();


	Point p1{ 0, 5 };
	Point p2{ 30, 20 };
	Rect rect3{ p1, p2 };

	rect3.Print();

	rect3.Translate(500, 0);

	rect3.Print();
}