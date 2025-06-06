#pragma once
#include "IShape.h"

class Rectangle : IShape
{
public:
	//面積の計算関数
	void Size() override;
	//面積の表示関数
	void Draw() override;

private:
	//横幅
	int witdh_;
	//縦幅
	int height_;
	//面積
	int result_;
};

