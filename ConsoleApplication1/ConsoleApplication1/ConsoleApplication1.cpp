#include <iostream>
#include "Circle.h"

int main()
{
    Square k(10);
    Line l(22);
    Rectangle A = k + l;
    A.print();
   std:: cout << "\n";

    Square kvadrat(10);
    Line line(5);
    Rectangle B = kvadrat- line;
    B.print();

    std::cout << "\n";
    Circle C(10);
    Square K(5);
    Monet japan = C + K;
    japan.print();

    std::cout << "\n";

    Circle ci(5);
    Square *kv= new Square(10);
     Wash_mash W = ci + kv ;
     W.print();
  
    
}

