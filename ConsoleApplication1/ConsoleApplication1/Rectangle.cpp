#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle()
{
	this->h = 0;
	this->dlina = 0;
}

Rectangle::Rectangle(float H, float DLINA)
{
	this->h = H;
	this->dlina = DLINA;
}

float Rectangle::getH()
{
	return this->h;
}

float Rectangle::getDlina()
{
	return this->dlina;
}

void Rectangle::print()
{
	std::cout << "Rectangle  h: " << this->h << "\t dlina: " << this->dlina << "\t";
}
