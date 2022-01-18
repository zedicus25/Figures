#pragma once
#include "Figura.h"
#include <iostream>
class Circle : public Figura
{
protected:
	int radius;
	char* color;
public:
	Circle() : Figura() {
		this->radius = 0;
		this->color = new char[0];
	}
	Circle(int x, int y, int radius, const char* color);
	Circle(Circle& tmp);


	inline int getRadius() const {
		return this->radius;
	}
	inline char* getColor() const {
		return this->color;
	}

};

