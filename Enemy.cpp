#include "Enemy.h"
#include <stdio.h>

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
	(this->*spFuncTable[0])();
}

void(Enemy::* spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Withdrawal
};
