#include "Circle.h"
#include "Figure.h"
#include <iostream>
class wash_mash
{
private:
	Circle* circl;
	Square* kube;

	public:
		wash_mash(Circle& copy, Square& kopy);
		void print();
};