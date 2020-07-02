#pragma once
#include "shape.h"
#include "point.h"
class triangle : public shape
{
public:
	triangle(point a, point b, point c);
	double getArea();
	double getPerimeter();
	double getNumCorners();
	~triangle();

private:
	point m_a;
	point m_b;
	point m_c;
};

