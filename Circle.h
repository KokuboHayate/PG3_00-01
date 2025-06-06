#pragma once
#include "IShape.h"


class Circle : IShape
{
public:
	void Size() override; 
	void Draw() override;

private:
	float radius_;
};

