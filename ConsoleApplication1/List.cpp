#include "List.h"
#include <iostream>
void List::addToList(Figura& figura)
{
	Node* tmp = this->head;
	if (tmp == NULL) {
		tmp = new Node;
		tmp->val = &figura;
		tmp->next = nullptr;
		this->head = tmp;
	}
	else {
		while (tmp->next != nullptr) {
			tmp = tmp->next;
		}
		tmp->next = new Node;
		tmp->next->val = &figura;
		tmp->next->next = nullptr;
	}
	this->size++;
}
void List::showList()
{
	Node* tmp = this->head;
	while (tmp != nullptr) {
		std::cout << tmp->val->getInfo() << "\n";
		tmp = tmp->next;
	}
	delete[] tmp;
}
