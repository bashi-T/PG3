#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>
#include"Enemy.h"


int main()
{
	Enemy* enemy = new Enemy;
	enemy->Update();

	return 0;
}