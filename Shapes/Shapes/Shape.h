#ifndef SHAPE_H
#define SHAPE_H

// Abstract class for Shape.
class Shape {
public:
	Shape() {};

	// For a three-dimensional object, this is equivalent with the cross section.
	virtual	double getArea() = 0;

	virtual double getVolume() = 0;

	// The method I chose to differentiate between TwoDimensionalShape and ThreeDimensionalShape.
	virtual int getDimensionsCount() = 0;

};



#endif 
