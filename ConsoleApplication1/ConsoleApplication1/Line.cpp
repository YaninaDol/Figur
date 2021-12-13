#include "Line.h"

Line::Line()
{
	this->dlina = 0;
}

Line::Line(float DLINA)
{
	this->dlina = DLINA;
}

float Line::getLine()
{
	return this->dlina;
}
