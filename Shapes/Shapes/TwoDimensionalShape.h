#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "Shape.h"

class TwoDimensionalShape : public Shape {
public:
	TwoDimensionalShape();

	int getDimensionsCount() override { return 2; }
	

};

#endif