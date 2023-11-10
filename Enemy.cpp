#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])()
{
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Escape
};

void Enemy::Approach()
{
	printf("敵は接近してきた!\n");
}

void Enemy::Shoot()
{
	printf("敵は射撃してきた!\n");
}

void Enemy::Escape()
{
	printf("敵は後退した\n");
}

void Enemy::Update()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*spFuncTable[i])();
	}
}
