#pragma once
#include "Monet.h"
#include "Wash_mash.h"
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
	Wash_mash operator+(Square* razmer)
	{
		return Wash_mash(this->diamentr, razmer->getSize());
	}

	float geCircle();

};

