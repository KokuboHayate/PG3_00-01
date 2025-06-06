#pragma once
class IShape
{
public:
	//図形の面積の計算関数
	virtual void Size() = 0;
	//図形の面性の表示関数
	virtual void Draw() = 0;

};

