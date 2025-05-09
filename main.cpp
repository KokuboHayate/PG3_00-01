#include <stdio.h>
#include "Enemy.h"

int main() 
{
	Enemy enemy;

	//接近フェーズ
	enemy.Update();

	//射撃フェーズ
	enemy.Update();

	//後退フェーズ
	enemy.Update();
	
	return 0;
}