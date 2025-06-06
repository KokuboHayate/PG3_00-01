#pragma once
#include "IShape.h"

class Rectangle : IShape
{
public:
	void Size() override;
	void Draw() override;

private:
	int witdh_;
	int height_;
	int result_;
};

