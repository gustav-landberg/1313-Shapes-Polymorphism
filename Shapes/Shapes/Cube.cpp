#include "Cube.h"
#include <stdexcept>
Cube::Cube(double val)
{
	if (val >= 0)
		length = val;
	else
		throw std::invalid_argument("Can not instantiate Cube with negative length.");
}

double Cube::getArea()
{
	return length * length;
}

double Cube::getVolume()
{
	return length * length * length;
}
