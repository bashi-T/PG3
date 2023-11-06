#include "Circle.h"

void Circle::Size()
{
	size = radius * M_PI;
}

void Circle::Draw()
{
	printf("%f", size);
}
