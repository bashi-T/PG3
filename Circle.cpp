#include "Circle.h"

void Circle::Size()
{
	size = radius * M_PI;
}

void Circle::Draw()
{
	printf_s("半径:%f,面積:%f\n",radius, size);
}
