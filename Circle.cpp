#include "Circle.h"

void Circle::Size()
{
	size = radius * radius * M_PI;
}

void Circle::Draw()
{
	printf_s("%f\n",/*radius, */size);
}
