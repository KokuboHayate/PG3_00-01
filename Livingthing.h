#pragma once
#include <stdio.h>

class Livingthing
{
public:
	//コンストラクタ
	Livingthing();
	//デストラクタ
	~Livingthing();
	//産声を上げる関数(仮想関数)
	virtual void Firstcry();

protected:
	//生物名
	const char* name;
};

