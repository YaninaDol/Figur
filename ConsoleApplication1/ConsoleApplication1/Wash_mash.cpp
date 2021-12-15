#include "Wash_mash.h"
#include <iostream>
Wash_mash::Wash_mash(float diametr, float size)
{
	this->circle_di = diametr;
	this->square_sq = size;
}

void Wash_mash::print()
{
	std::cout << "Wash machine : circle " << this->circle_di << "\t square  size " << this->square_sq;
}
