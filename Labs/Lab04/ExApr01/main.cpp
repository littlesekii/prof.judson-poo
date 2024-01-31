#include <iostream>
#include "Rect.h"

using namespace std;
int main()
{

	Rect rect;
	rect.Create(0, 0, 10, 10);

	rect.Translate(5, 5);
	rect.Translate(5, 5);

	rect.Translate(30, 30);

	return EXIT_SUCCESS;
}