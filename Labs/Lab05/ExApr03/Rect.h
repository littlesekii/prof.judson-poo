#pragma once
#include "Point.h"

class Rect
{

private:
	Point a;
	Point b;

public:
	Rect();
	Rect(Point& p1, Point& p2);
	Rect(int ax, int ay, int bx, int by);
	
	void Translate(int dx, int dy);
	void Print();

};