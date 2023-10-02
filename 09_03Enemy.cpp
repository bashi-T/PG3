#include "09_03Enemy.h"
#include<stdio.h>

void Enemy::Damage(int damage) {
	hp_ -= damage;
	printf("%s:%d\n",name_,hp_);
}

Enemy::Enemy(const char* name)
{
	this->name_ = name;
}

Enemy::~Enemy()
{
	printf("%s �� �|�ꂽ\n", name_);
}
