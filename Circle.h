#pragma once
#include"IShape.h"
#include<stdio.h>
#include<math.h>6
#define M_PI 3.14159265358979;

class Circle :public IShape
{
public:
	void Size() override;
	void Draw() override;

protected:
	float radius;
	float size;
};

