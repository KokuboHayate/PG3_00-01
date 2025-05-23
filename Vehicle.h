#pragma once
class Vehicle
{
public:
	Vehicle();

	~Vehicle();

	virtual void Start();

protected:
	const char* name;
};

