#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	//初期化
	phase_ = approach;
}

//宣言したメンバ関数ポインタの実態
void(Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Withdrawal
};


void Enemy::Approach()
{
	printf("敵が1マス接近しました\n");
}

void Enemy::Shooting()
{
	printf("敵が射撃攻撃を行いました\n");
}

void Enemy::Withdrawal()
{
	printf("敵が1マス後退しました\n");
}

void Enemy::Update()
{
	//メンバ関数ポインタに入っている関数を呼び出す
	(this->*spFuncTable[static_cast<size_t>(phase_)])();

	//後退フェーズ以外なら、フェーズを１つ進める
	if (phase_ < withdrawal) {
		phase_ = static_cast<Phase>(phase_ + 1);
		printf("フェーズが進みました\n\n");
	}
}


