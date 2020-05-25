#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H
#include "Shape.h"
class ThreeDimensionalShape : public Shape {
public:
	ThreeDimensionalShape();

	

	int getDimensionsCount() override { return 3; }

};


#endif