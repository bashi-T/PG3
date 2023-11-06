#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
int main()
{
	SetConsoleOutputCP(65001);
	IShape* iShape[2];

	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			iShape[0] = new Circle;
		}
		else
		{
			//iShape[i] = new Rectangle;
		}
	}

	for (int i = 0; i < 1; i++)
	{
		iShape[i]->Draw();
	}

	return 0;
}