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

	int getX() const {
		return this->x;
	}
	int getY() const {
		return this->y;
	}
	std::string getInfo();

};

