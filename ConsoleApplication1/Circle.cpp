#include "Circle.h"

Circle::Circle(int x, int y, int radius, std::string color)
{
	this->x = x;
	this->y = y;
	this->radius = radius;
	this->color = color;
}

Circle::Circle(Circle& tmp)
{
	this->x = tmp.getX();
	this->y = tmp.getY();
	this->radius = tmp.getRadius();
	this->color = tmp.getColor();
}

std::string Circle::getInfo()
{
	std::string info;
	info = "Color: ";
	info += this->getColor();
	info += " Radius: ";
	info += std::to_string(this->getRadius());
	info += " X: ";
	info += std::to_string(this->getX());
	info += " Y: ";
	info += std::to_string(this->getY());
	return info;
}

