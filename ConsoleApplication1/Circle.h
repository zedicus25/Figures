#pragma once
#include "Figura.h"
#include <string>
class Circle : public Figura
{
protected:
	int radius;
	std::string color;
public:
	Circle() : Figura() {
		this->radius = 0;
		this->color = "None";
	}
	Circle(int x, int y, int radius, std::string color);
	Circle(Circle& tmp);


	inline int getRadius() const {
		return this->radius;
	}
	inline std::string getColor() const {
		return this->color;
	}

	std::string getInfo();
	

};

