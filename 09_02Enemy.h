#pragma once
class Enemy
{
public:
	void Move();
	void Draw();
private:
	int posX_ = 500;
	int posY_ = 300;
	int speedX_ = 10;
	int speedY_ = 10;
	int radius_ = 10;


};

