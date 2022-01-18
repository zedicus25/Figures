#include <iostream>
#include "RedCircle.h"
#include "GreenCircle.h"
int main()
{
    Circle circle(5, 7, 8, "Black");
    Circle circleTmp(circle);
    std::cout << circle.getColor() << "\n";
    std::cout << circle.getRadius() << "\n";
    circle = RedCircle(2, 4, 7);
    std::cout << circle.getColor() << "\n";
    std::cout << circle.getRadius() << "\n";
    circle = GreenCircle(5, 1, 6);
    std::cout << circle.getColor() << "\n";
    std::cout << circle.getRadius() << "\n";

    std::cout << circleTmp.getColor() << "\n";
    std::cout << circleTmp.getRadius() << "\n";
  
}