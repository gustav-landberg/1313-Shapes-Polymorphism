#include "Circle.h"

#define _USE_MATH_DEFINES
#include <math.h>
#include <stdexcept>

inline double Circle::getArea()
{
	
	return M_PI * pow(x, 2);
}

inline void Circle::setRadius(double radius)
{
	if (radius >= 0)
		this->x = radius;
	else
		throw std::invalid_argument("[Circle] Cannot set to negative radius");
}

inline double Circle::getRadius()
{
	return x;
}
