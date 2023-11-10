#pragma once
#include<stdio.h>

class Enemy
{
public:
	void Approach();
	void Shoot();
	void Escape();
	void Update();

private:
	static void (Enemy::* spFuncTable[])();
};

