#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include <iostream>
#include "shape.h"
void sortByArea(shape& a, shape& b, shape& c);
void sortByCorners(shape& a, shape& b, shape& c);
bool isCircle(shape& a);

void main() {
	triangle a(point(0, 0), point(0, 4), point(3, 0));
	std::cout << a.getArea() << std::endl;
	std::cout << a.getPerimeter() << std::endl << std::endl;

	rectangle b(point(0, 0), 100,200);
	std::cout << b.getArea() << std::endl;
	std::cout << b.getPerimeter() << std::endl << std::endl;

	circle c(point(0, 0),5);
	std::cout << c.getArea() << std::endl;
	std::cout << c.getPerimeter() << std::endl << std::endl;


	
	sortByArea(a, b, c);
	sortByCorners(a, b, c);
	std::cout << std::endl;
	std::cout << isCircle(a) << std::endl;
	std::cout << isCircle(b) << std::endl;
	std::cout << isCircle(c) << std::endl;

}

//not allowed to use stl containers or methods, implemented as direct comparison
void sortByArea(shape& a, shape& b, shape& c) {
	double areaA = a.getArea();
	double areaB = b.getArea();
	double areaC = c.getArea();

	if (areaA >= areaB && areaB >= areaC) 
		std::cout << "Flaeche a: " << areaA << " , Flaeche b:" << areaB << " , Flaeche c:" << areaC << std::endl;
	else if (areaA >= areaC && areaC >= areaB)
		std::cout << "Flaeche a: " << areaA << " , Flaeche c:" << areaC << " , Flaeche b:" << areaB << std::endl;
	else if (areaB >= areaA && areaA >= areaC)
		std::cout << "Flaeche b: " << areaB << " , Flaeche a:" << areaA << " , Flaeche c:" << areaC << std::endl;
	else if (areaB >= areaC && areaC >= areaA)
		std::cout << "Flaeche b: " << areaB << " , Flaeche c:" << areaC << " , Flaeche a:" << areaA << std::endl;
	else if (areaC >= areaA && areaA >= areaB)
		std::cout << "Flaeche c: " << areaC << " , Flaeche a:" << areaA << " , Flaeche b:" << areaB << std::endl;
	else if (areaC >= areaB && areaB>= areaA)
		std::cout << "Flaeche c: " << areaC << " , Flaeche b:" << areaB << " , Flaeche a:" << areaA << std::endl;
}

void sortByCorners(shape& a, shape& b, shape& c) {
	double cornersA = a.getNumCorners();
	double cornersB = b.getNumCorners();
	double cornersC = c.getNumCorners();

	if (cornersA >= cornersB && cornersB >= cornersC)
		std::cout << "Ecken a: " << cornersA << " , Ecken b:" << cornersB << " , Ecken c:" << cornersC << std::endl;
	else if (cornersA >= cornersC && cornersC >= cornersB)
		std::cout << "Ecken a: " << cornersA << " , Ecken c:" << cornersC << " , Ecken b:" << cornersB << std::endl;
	else if (cornersB >= cornersA && cornersA >= cornersC)
		std::cout << "Ecken b: " << cornersB << " , Ecken a:" << cornersA << " , Ecken c:" << cornersC << std::endl;
	else if (cornersB >= cornersC && cornersC >= cornersA)
		std::cout << "Ecken b: " << cornersB << " , Ecken c:" << cornersC << " , Ecken a:" << cornersA << std::endl;
	else if (cornersC >= cornersA && cornersA >= cornersB)
		std::cout << "Ecken c: " << cornersC << " , Ecken a:" << cornersA << " , Ecken b:" << cornersB << std::endl;
	else if (cornersC >= cornersB && cornersB >= cornersA)
		std::cout << "Ecken c: " << cornersC << " , Ecken b:" << cornersB << " , Ecken a:" << cornersA << std::endl;
}

bool isCircle(shape& a) {
	return a.getNumCorners() == 0;
}