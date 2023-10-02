#include"09_03Enemy.h"

int main() {
	Enemy* enemy_=new Enemy("ƒ`ƒ“ƒsƒ‰");
	
	while(enemy_->hp_>1){
	   enemy_->Damage(enemy_->damage_);
	
	 if (enemy_->hp_ == 0) {
		enemy_->~Enemy();
	 }
	}

	return 0;
}