#include "Figure.h"

Square::Square()
{
	h = 0;
	dlina = 0;
}

Square::Square(float H, float DLINA)
{
	h = H;
	dlina = DLINA;
}

float Square::getH()
{
	return this->h;
}

float Square::getDlina()
{
	return this->dlina;
}
