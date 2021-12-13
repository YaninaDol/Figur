#pragma once
#include "Rectangle.h"
#include "Line.h"

class Square
{
private:
	float h;
	float dlina;

public:
	Square();
	Square(float H, float DLINA);
	float getH();
	float getDlina();


	Rectangle operator+(Line other) {
		return Rectangle(this->h,this->dlina+other.getLine());
	}

	Rectangle operator-(Line other) {
		return Rectangle(this->h, this->dlina - other.getLine());
	}

	
};




