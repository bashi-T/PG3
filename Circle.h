#pragma once
#include<stdio.h>
#include"IShape.h"

class Circle :public IShape
{
public:
	void Size() override;
	void Draw() override;

protected:
	float radius = 10.0f;
	float size;
};

