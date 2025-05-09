#pragma once

class Enemy
{
public:
	//コンストラクタ
	Enemy();

	//接近フェーズ関数
	void Approach();

	//射撃フェーズ関数
	void Shooting();

	//離脱フェーズ関数
	void Withdrawal();

	//更新関数
	void Update();

	//フェーズ管理用
	enum Phase {
		approach,
		shooting,
		withdrawal
	};

private:
	//メンバ関数ポインタのテーブル
	static void(Enemy::*spFuncTable[])();

	//現在のフェーズ
	Phase phase_;
};

