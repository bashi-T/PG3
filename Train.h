#pragma once
#include "Vehicle.h"

class Train :public Vehicle
{
public:
	Train();
	~Train();

	void Drive() override;

private:

};