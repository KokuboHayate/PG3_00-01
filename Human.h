#pragma once
#include <stdio.h>
#include "Livingthing.h"

class Human : public Livingthing
{
public:
	//コンストラクタ
	Human();
	//デストラクタ
	~Human();
	//産声を上げる(仮想関数)
	void Firstcry() override;
};

