#pragma once
#include "Circle.h"
class RedCircle : public Circle
{
public:
	RedCircle() : Circle()
	{
		this->color = new char[4];
		strcpy_s(color, 4, "Red");
	}

	RedCircle(int x, int y, int radius);
	

	inline char* getColor() const {
		return this->color;
	}

};

