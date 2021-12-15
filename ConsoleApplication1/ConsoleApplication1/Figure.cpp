#include "Figure.h"

Square::Square()
{
	size = 0.0;
}

Square::Square(float nsize)
{
	size = nsize;
}

float Square::getSize()
{
	return this->size;
}

