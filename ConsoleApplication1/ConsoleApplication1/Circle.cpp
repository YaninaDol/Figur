#include "Circle.h"

Circle::Circle()
{
	this->diamentr = 0;
}

Circle::Circle(float DIAMETR)
{
	this->diamentr = DIAMETR;
}

float Circle::geCircle()
{
	return this->diamentr;
}
