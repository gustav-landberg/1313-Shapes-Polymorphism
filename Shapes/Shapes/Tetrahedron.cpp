#include "Tetrahedron.h"

#include <stdexcept>

Tetrahedron::Tetrahedron(double w, double h, double d)
{
	if (w >= 0.0 && h >= 0.0 && d >= 0.0) {
		this->width = w;
		this->height = h;
		this->depth = d;
	}
	else
		throw std::invalid_argument("Cannot use negative indata.");
	
}

double Tetrahedron::getArea()
{
	return width * height;
}

double Tetrahedron::getVolume()
{
	return (width * height * depth) / 3.0;
}