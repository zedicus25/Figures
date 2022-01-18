#pragma once
#include "Figura.h"
class Square : public Figura
{
private:
	int size;
public:
	Square() : Figura() {
		this->size = 0;
	}
	Square(int x, int y,int size){
		this->x = x;
		this->y = y;
		this->size = size;
	}

	inline int getSize() const{
		return this->size;
	}
	inline int calculateArea() const {
		return this->getSize() * this->getSize();
	}
	std::string getInfo();

	
};

