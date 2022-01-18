#include "Circle.h"

Circle::Circle(int x, int y, int radius, const char* color)
{
	this->x = x;
	this->y = y;
	this->radius = radius;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
}

Circle::Circle(Circle& tmp)
{
	this->x = tmp.getX();
	this->y = tmp.getY();
	this->radius = tmp.getRadius();
	this->color = new char[strlen(tmp.getColor()) + 1];
	strcpy_s(this->color, strlen(tmp.getColor()) + 1, tmp.getColor());
}
