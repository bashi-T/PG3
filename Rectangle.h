#pragma once
#include"IShape.h"
#include<stdio.h>
#include<math.h>

class Rectangle :public IShape
{
public:
	void Size() override;
	void Draw() override;

protected:
	float width;
	float height;
	float size;
};
