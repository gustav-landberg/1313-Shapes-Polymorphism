#ifndef SPHERE_H
#define SPHERE_H

#include "ThreeDimensionalShape.h"



// A representation of a sphere. Uses M_PI from math.h as pi indata.
class Sphere : public ThreeDimensionalShape {

public:
	Sphere(double radius);
	virtual double getVolume() override;
	virtual double getArea() override;

	double	getRadius();
	void	setRadius(double radius);
private:
	double radius;
};

// It would make more sense to derive this from a sphere instead, as the getArea function then could be inherited.
// The problem seems to imply that it should be done from ThreeDimensionalShape instead, however.





#endif 