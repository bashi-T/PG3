#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])()
{
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Escape
};

void Enemy::Approach()
{
	printf("“G‚ÍÚ‹ß‚µ‚Ä‚«‚½!\n");
}

void Enemy::Shoot()
{
	printf("“G‚ÍËŒ‚‚µ‚Ä‚«‚½!\n");
}

void Enemy::Escape()
{
	printf("“G‚ÍŒã‘Ş‚µ‚½\n");
}

void Enemy::Update()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*spFuncTable[i])();
	}
}
