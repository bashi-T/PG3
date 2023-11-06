#include "Rectangle.h"

void Rectangle::Size()
{
	size = width * height;
}

void Rectangle::Draw()
{
	printf("縦:%f,横:%f,面積:%f\n", width, height, size);
}
