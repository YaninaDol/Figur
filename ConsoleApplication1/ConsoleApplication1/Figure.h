#pragma once
#include "Rectangle.h"
#include "Line.h"
#include <iostream>
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
	
	friend std::ostream& operator<<(std::ostream& out, const Square& kvadrat)
	{
		out << " Size :" << kvadrat.size<<"\n";
		return out;
	}

	friend std::istream& operator>>(std::istream& in,  Square& kvadrat)
	{
		in >>  kvadrat.size ;
		return in;
	}
};




