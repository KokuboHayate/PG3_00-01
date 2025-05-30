#pragma once
#include <stdio.h>
#include "Livingthing.h"

class Dog : public Livingthing
{
public:
	//コンストラクタ
	Dog();
	//デストラクタ
	~Dog();
	//産声を上げる関数(仮想関数)
	void Firstcry() override;

};

