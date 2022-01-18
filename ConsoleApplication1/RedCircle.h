#pragma once
#include "Circle.h"
class RedCircle : public Circle
{
public:
	RedCircle() : Circle()
	{
		this->color = "Red";
	}

	RedCircle(int x, int y, int radius);
	

	inline std::string getColor() const {
		return this->color;
	}
};

