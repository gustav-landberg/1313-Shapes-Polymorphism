#include <iostream>
#include <vector>

#include "Circle.h"
#include "Cube.h"
#include "Sphere.h"
#include "Square.h"
#include "Triangle.h"
#include "Tetrahedron.h"

int main() {
	std::vector<Shape*> shapes;

	shapes.push_back (new Triangle(2.0, 2.0)); // 2*2 / 2 ger 2
	shapes.push_back(new Cube(2.0)); // 2^3 ger 8

	for (int i = 0; i < shapes.size(); i++) {
		switch (shapes.at(i)->getDimensionsCount()) {
			case 2:
				std::cout << shapes.at(i)->getArea() << std::endl;
				break;
			case 3:
				std::cout << shapes.at(i)->getVolume() << std::endl;
				break;
		}
	}


	return 0;
}