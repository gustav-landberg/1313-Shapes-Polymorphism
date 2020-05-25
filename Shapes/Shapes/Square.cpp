#include "Square.h"


Square::Square(double length)
{
	this->side = length;
}

double Square::getArea()
{
	return side * side;
}
