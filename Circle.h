#pragma once
#include "IShape.h"


class Circle : IShape
{
public:
	//面積の計算関数
	void Size() override; 
	//面積の表示関数
	void Draw() override;

private:
	//半径
	int radius_;
	//面積
	float result_;
};

