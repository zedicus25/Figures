#include "Figura.h"

Figura::Figura()
{
	this->x = 0;
	this->y = 0;
}

Figura::Figura(int x, int y)
{
	this->x = x;
	this->y = y;
}

Figura::Figura(Figura& tmp)
{
	this->x = tmp.getX();
	this->y = tmp.getY();
}
 

