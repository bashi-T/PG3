#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>
#include "Vehicle.h"
#include "Car.h"
#include "Ship.h"
#include "Train.h"


int main()
{
	Vehicle* vehicle[4];

	for (int i = 0; i < 3; i++) {
		switch(i)
		{
		case 0:
			vehicle[i] = new Car;
			break;
		case 1:
			vehicle[i] = new Ship;
			break;
		case 2:
			vehicle[i] = new Train;
			break;
		}
	}

	for (int i = 0; i < 3; i++) {
		vehicle[i]->Drive();
	}

	for (int i = 0; i < 3; i++) {
		delete vehicle[i];
	}

	return 0;
}