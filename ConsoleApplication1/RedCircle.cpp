#include "RedCircle.h"

RedCircle::RedCircle(int x, int y, int radius)
{
	this->x = x;
	this->y = y;
	this->radius = radius;
	this->color = new char[4];
	strcpy_s(color, 4, "Red");
}
