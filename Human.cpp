#include "Human.h"

Human::Human()
{
	//生物名を人間とする
	name = "人間";
}

Human::~Human()
{
}

void Human::Firstcry()
{
	printf("今この瞬間、%sが産声を上げた\n", name);
}
