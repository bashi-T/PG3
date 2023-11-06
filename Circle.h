#pragma once
#include<stdio.h>
#include"IShape.h"
#include<math.h>
#define M_PI 3.14159265358979;

class Circle :public IShape
{
public:
	void Size() override;
	void Draw() override;

protected:
	float radius = 10.0f;
	float size;
};

