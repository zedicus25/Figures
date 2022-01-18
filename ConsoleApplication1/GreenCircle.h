#pragma once
#include "Circle.h"
class GreenCircle : public Circle
{
public:
	GreenCircle() : Circle()
	{
		this->color = new char[6];
		strcpy_s(this->color, 6, "green");
	}
	GreenCircle(int x, int y, int radius) : Circle(x,y,radius,"green")
	{
		this->color = new char[6];
		strcpy_s(this->color, 6, "green");
	}
};

