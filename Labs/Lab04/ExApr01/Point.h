#pragma once
class Point
{

private:
	int x;
	int y;

public:
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);

	int X();
	int Y();
};

inline int Point::X() { return x; }
inline int Point::Y() { return y; }