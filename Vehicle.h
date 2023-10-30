#pragma once
#include<stdio.h>

class Vehicle
{
public:
	Vehicle();

	virtual ~Vehicle();

	virtual void Drive();

protected:
	const char* name;
};

