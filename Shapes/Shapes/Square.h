#ifndef SQUARE_H
#define SQUARE_H
#include "TwoDimensionalShape.h"
class Square : public TwoDimensionalShape {
public:
	Square(double length = 2.0);

	virtual double getArea() override;
	virtual double getVolume() override { return 0.0; }


	void setSideLength(double length) { this->side = length; }
private:
	double side;
};

#endif