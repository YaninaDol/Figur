#pragma once
#include "Monet.h"

class Circle
{
private:
	float diamentr;
public:
	Circle();
	Circle(float DIAMETR);
	
	Monet operator+(Square size)
	{
		return Monet(this->diamentr, size.getSize());
	}

	float geCircle();

};

