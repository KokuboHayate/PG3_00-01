#include "Dog.h"

Dog::Dog()
{
	//生物名を犬とする
	name = "犬";
}

Dog::~Dog()
{
}

void Dog::Firstcry()
{
	printf("今この瞬間、%sが産声を上げた\n", name);
}
