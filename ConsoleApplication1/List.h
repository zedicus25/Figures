#pragma once
#include "RedCircle.h"
#include "GreenCircle.h"
#include "Square.h"
struct Node {
	Figura* val;
	Node* next;
};
class List
{
private:
	Node* head;
	unsigned int size;
public:
	explicit List() {
		this->head = NULL;
		this->size = 0;
	}
	void addToList(Figura& figura);
	void showList();


};

