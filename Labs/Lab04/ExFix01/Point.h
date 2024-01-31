#pragma once
class Point
{

private:
	int x;
	int y;

public:
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);

	//a
	//int X() { return x; }
	//int Y() { return y; }

	int X();
	int Y();

};

//c
inline int Point::X() { return x; }
inline int Point::Y() { return y; }