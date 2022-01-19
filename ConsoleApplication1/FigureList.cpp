#include "FigureList.h"

void FigureList::addFiguru(Figura& figura)
{
	this->figurs.addToList(figura);
}

void FigureList::print()
{
	this->figurs.showList();
}
