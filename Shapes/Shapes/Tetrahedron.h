#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "ThreeDimensionalShape.h"
class Tetrahedron : public ThreeDimensionalShape {

public:

	Tetrahedron(double width, double height, double depth);

	virtual double getArea() override;
	virtual double getVolume() override;
private:
	double width, height, depth;
};

#endif