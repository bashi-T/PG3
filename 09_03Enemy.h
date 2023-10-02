#pragma once
class Enemy
{
public:
	Enemy(const char* name);
	~Enemy();

	void Damage(int damage);


	int damage_ = 10;
	int hp_ = 100;
	const char* name_;

};

