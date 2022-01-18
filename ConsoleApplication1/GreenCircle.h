#pragma once
#include "Circle.h"
class GreenCircle : public Circle
{
public:
	GreenCircle() : Circle()
	{
		this->color = "Green";
	}
	GreenCircle(int x, int y, int radius) : Circle(x, y, radius, "green")
	{
		this->color = "Green";
	}
};

