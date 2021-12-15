#include "Monet.h"

Monet::Monet(float circle_diametr, float square_size)
{
	this->circle_d = circle_diametr;
	this->square_s = square_size;
}

void Monet::print()
{
	std::cout <<"Monet: circle "<< this->circle_d << "\t square  size " << this->square_s ;
}
