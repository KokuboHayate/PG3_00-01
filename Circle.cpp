#define _USE_MATH_DEFINES

#include "Circle.h"
#include <stdio.h>
#include "math.h"

void Circle::Size()
{
	radius_ = 5;
	result_ = radius_ * float(M_PI);
}

void Circle::Draw()
{
	printf("半径%dの円の面積は%fです。\n", radius_, result_);
}
