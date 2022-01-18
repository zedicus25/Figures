#include <iostream>
#include "RedCircle.h"
#include "GreenCircle.h"
int main()
{
     Circle* circles[4]{
         circles[0] = new Circle(5, 7, 8, "Black"),
         circles[1] = new Circle(*circles[0]),
         circles[2] = new RedCircle(2,4,7),
         circles[3] = new GreenCircle(5,1,6)
     };
     for (size_t i = 0; i < 4; i++)
     {
         std::cout << circles[i]->getInfo() << "\n";
     }
}