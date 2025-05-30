#pragma once
#include <stdio.h>

class Livingthing
{
public:
	Livingthing();

	~Livingthing();

	virtual void Firstcry();

protected:
	const char* name;
};

