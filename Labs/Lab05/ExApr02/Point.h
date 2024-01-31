#pragma once

class Point
{

private:
	int x;
	int y;

public:
	Point();
	Point(int ix, int iy);

	void MoveTo(int px, int py);
	void Translate(int dx, int dy);

	void Print();
};
