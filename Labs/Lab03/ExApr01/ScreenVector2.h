#pragma once
class ScreenVector2
{
private:
	int x;
	int y;

	int screenWidth = 1920;
	int screenHeight = 1080;

public:
	void translate(int, int);
	void moveTo(int, int);
	void exibir();
};

