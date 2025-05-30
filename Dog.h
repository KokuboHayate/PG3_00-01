#pragma once
#include <stdio.h>
#include "Livingthing.h"

class Dog : public Livingthing
{
public:

	Dog();

	~Dog();

	void Firstcry() override;

};

