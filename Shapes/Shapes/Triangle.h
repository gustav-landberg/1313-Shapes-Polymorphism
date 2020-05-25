#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "TwoDimensionalShape.h"

// Right-angeled triangle.
class Triangle : public TwoDimensionalShape {

public:
	Triangle(double base = 2.0, double height = 2.0);

	virtual double getArea() override { return ((base * height) / 2.0); }
	virtual double getVolume() override { return 0.0; }
private:
	double base, height;


};


#endif