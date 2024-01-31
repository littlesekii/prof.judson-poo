#include <iostream>
#include "Point.h"

using namespace std;

//b
//inline int Point::X() { return x; }
//inline int Point::Y() { return y; }

int main()
{

	Point p;

	p.MoveTo(100, 5);

	cout << "X: " << p.X() << " Y: " << p.Y();

	return EXIT_SUCCESS;
}