#include "09_02Enemy.h"
#include"Novice.h"

void Enemy::Move()
{
	if (posX_ + speedX_ <= radius_ || posX_ + speedX_ >= 1280-radius_) {
		speedX_ *= -1;
	}
	if (posY_ + speedY_ <= radius_ || posY_ + speedY_ >= 720-radius_) {
		speedY_ *= -1;
	}
	posX_ += speedX_;
	posY_ += speedY_;
}

void Enemy::Draw()
{
	Novice::DrawEllipse(posX_, posY_,
		radius_, radius_, 0.0f, 0xFFFFFFFF, kFillModeSolid);
	Novice::ScreenPrintf(10, 10, "%d,%d", posX_, posY_);
}
