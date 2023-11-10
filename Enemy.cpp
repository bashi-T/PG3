#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])()
{
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Escape
};

void Enemy::Approach()
{
	printf("�G�͐ڋ߂��Ă���!\n");
}

void Enemy::Shoot()
{
	printf("�G�͎ˌ����Ă���!\n");
}

void Enemy::Escape()
{
	printf("�G�͌�ނ���\n");
}

void Enemy::Update()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*spFuncTable[i])();
	}
}
