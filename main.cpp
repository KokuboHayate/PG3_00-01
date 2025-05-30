#include <stdio.h>
#include "Livingthing.h"
#include "Human.h"
#include "Dog.h"

int main() 
{
	Livingthing* livingthing[3];

	for (int i = 0; i < 3; i++) {
		if (i < 2) {
			livingthing[i] = new Human;
		} else {
			livingthing[i] = new Dog;
		}
	}

	for (int i = 0; i < 3; i++) {
		livingthing[i]->Firstcry();
	}

	for (int i = 0; i < 3; i++) {
		delete livingthing[i];
	}

	return 0;
}