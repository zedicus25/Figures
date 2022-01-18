#include "Square.h"

std::string Square::getInfo()
{
	std::string info;
	info = " X: ";
	info += this->getX();
	info = " Y: ";
	info += this->getY();
	info += " Size: ";
	info += this->getSize();
	return info;
}
