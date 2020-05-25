#include "Sphere.h"

// for std::invalid_arguement
#include <stdexcept>

// for M_PI
#define _USE_MATH_DEFINES
#include <math.h>


Sphere::Sphere(double new_radius)
{
	setRadius(new_radius);
}

double Sphere::getVolume() {
	return ((4.0 * M_PI * pow(radius, 3.0)) / 3.0);
}

double Sphere::getArea()
{
	return M_PI * pow(radius, 2);
}

inline double Sphere::getRadius() {
	return radius;
}

inline void Sphere::setRadius(double new_radius)
{
	if (new_radius >= 0.0)
		radius = new_radius;
	else
		throw std::exception("Tried to input negative radius.");
}
