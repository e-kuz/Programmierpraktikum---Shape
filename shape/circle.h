#pragma once
#include "shape.h"
#include "point.h"
class circle :
	public shape
{
public:
	circle(point middle, double radius);
	~circle();
	double getArea();
	double getPerimeter();
	double getNumCorners();
	
private:
	point m_middle;
	double m_radius;
};

