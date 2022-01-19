#include <iostream>
#include "FigureList.h"
int main()
{
    FigureList list;
    Circle circle(4, 5, 5, "black");
    GreenCircle green(1, 25, 6);
    RedCircle red(8, 2, 3);
    Square squar(4, 2, 3);
    list.addFiguru(circle);
    list.addFiguru(red);
    list.addFiguru(green);
    list.addFiguru(squar);
    list.print();

}