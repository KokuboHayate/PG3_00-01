#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() 
{
	Circle circle;
	Rectangle rectangle;

	circle.Size();
	rectangle.Size();

	circle.Draw();
	rectangle.Draw();

	return 0;
}