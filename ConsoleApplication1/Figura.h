#pragma once
#include <string>
class Figura
{
protected:
	int x;
	int y;
public:
	Figura();
	Figura(int x, int y);
	Figura(Figura& tmp);

	int getX() const {
		return this->x;
	}
	int getY() const {
		return this->y;
	}
	virtual std::string getInfo() = 0 {
		std::string info;
		info = " X: ";
		info += std::to_string(this->getX());
		info += " Y: ";
		info += std::to_string(this->getY());
		return info;
	}

};

