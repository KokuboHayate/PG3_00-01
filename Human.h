#pragma once
#include <stdio.h>
#include "Livingthing.h"

class Human : public Livingthing
{
public:

	Human();

	~Human();

	void Firstcry() override;
};

