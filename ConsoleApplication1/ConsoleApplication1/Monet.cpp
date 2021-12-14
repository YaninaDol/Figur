#include "Monet.h"

Monet::Monet(Circle& C, Square& K)
{
	circle = new Circle(C);
	kub = new Square(K);
}


void Monet::print()
{
	std::cout <<" Monet: circle "<< circle->geCircle() << "\t square  h " << kub->getH() << "\t dlina " << kub->getDlina();
}
