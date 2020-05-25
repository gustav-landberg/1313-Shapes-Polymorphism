#ifndef CUBE_H
#define CUBE_H

#include "ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape {

public:
	Cube(double length = 2);

	double getArea() override;
	double getVolume() override;
private:
	double length;
};






#endif
