#pragma once
#include<stdio.h>
#include "IShape.h"

class Rectangle : public IShape
{
public:
    void Size() override;
    void Draw() override;

protected:
    float width = 10.0f;
    float height = 8.0f;
    float size;
};