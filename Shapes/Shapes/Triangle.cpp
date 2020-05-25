#include "Triangle.h"

#include <stdexcept>

Triangle::Triangle(double b, double h)
{
	if (b >= 0.0, h >= 0.0) {
		this->base = b;
		this->height = h;
	}

	else
		throw std::invalid_argument("Invalid height.");
}

