#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() 
{
	//円の生成
	Circle circle;
	//矩形の生成
	Rectangle rectangle;

	//円の面積の計算
	circle.Size();
	//矩形の面積の計算
	rectangle.Size();

	//円の面積の標示
	circle.Draw();
	//矩形の面積の標示
	rectangle.Draw();

	return 0;
}