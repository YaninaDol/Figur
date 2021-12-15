#pragma once
#include "Rectangle.h"
#include "Line.h"



class Square
{
private:
	float size;

public:
	Square();
	Square(float nsize);
	float getSize();

	Rectangle operator+(Line other) {
		return Rectangle(this->size,this->size+other.getLine());
	}

	Rectangle operator-(Line other) {
		return Rectangle(this->size, this->size - other.getLine());
	}
	
	
};




