#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Line.h"
#include "Circle.h"
#include "Monet.h"
#include "wash_mash.h"

int main()
{
    Square k(10, 10);
    Line l(22);
    Rectangle A = k + l;
    A.print();

    Square kub(10, 5);
    Line line(5);

   /* Rectangle B = kub - line;
    B.print();*/

   
    Circle C(10);
    Monet japan (C,kub);
    japan.print();
    
}

