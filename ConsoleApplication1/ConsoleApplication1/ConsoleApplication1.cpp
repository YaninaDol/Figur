#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Line.h"

int main()
{
    Square k(10, 10);
    Line l(5);

   /* Rectangle A = k + l;
    A.print();*/

    Rectangle B = k - l;
    B.print();
}

