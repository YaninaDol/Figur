#include "wash_mash.h"

wash_mash::wash_mash(Circle& copy, Square& kopy)
{
		circl = new Circle(copy);
		kube = new Square(kopy);
}

void wash_mash::print()
{
	std::cout <<" Wash mashine : circle  " <<circl->geCircle() << "\t square h " << kube->getH() << "\t dlina " << kube->getDlina();
}
