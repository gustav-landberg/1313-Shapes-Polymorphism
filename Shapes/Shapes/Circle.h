#ifndef CIRCLE_H
#define CIRCLE_H

#include "TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape {
public:
	Circle(double length = 2.0) { this->x = length; }

	virtual double getArea() override;
	virtual double getVolume() override { return 0.0; }


	void setRadius(double radius);
	double getRadius();

private:
	double x; // radius
};

#endif