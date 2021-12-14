#pragma once
#include "Circle.h"
#include "Figure.h"
#include <iostream>

class Monet
{
	private:
		Circle* circle;
		Square* kub;

	public:
		Monet(Circle& C, Square& K);
     	void print();

};

