#include "Circle.h"

void Circle::Size()
{
	size = radius * radius * 3.1415926535;
}

void Circle::Draw()
{
	printf("半径:%f,面積:%f\n",radius, size);
}
