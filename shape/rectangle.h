#pragma once
#include "point.h"
#include "shape.h"
class rectangle : public shape
{
public:
	rectangle(point upperLeft, double width, double height);
	double getArea();
	double getPerimeter();
	double getNumCorners();
	~rectangle();

private:
	point m_upperLeft;
	double m_width;
	double m_height;
};
