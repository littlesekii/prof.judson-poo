#include <iostream>
#include "ScreenVector2.h"

int main()
{
	ScreenVector2 position;

	position.moveTo(5, 2);

	position.exibir();

	position.moveTo(1919, 1079);

	position.exibir();

	while (true)
	{
		position.translate(192, 108);

		position.exibir();
	}

	return 0;
}