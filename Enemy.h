#pragma once

class Enemy
{
public:
	void Approach();
	void Shooting();
	void Withdrawal();
	void Update();

private:
	static void(Enemy::* spFuncTable[])();

};

