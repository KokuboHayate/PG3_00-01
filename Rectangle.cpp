#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	witdh_ = 5;
	height_ = 7;

	result_ = witdh_ * height_;
}

void Rectangle::Draw()
{
	printf("矩形の面積は%fです。\n", result_);
}
