#include "circle.h"
#define _USE_MATH_DEFINES
#include <math.h>



circle::circle(point middle, double radius) : m_middle(middle), m_radius(radius)
{
}

double circle::getArea() {
	return m_radius*m_radius*M_PI;

}

double circle::getPerimeter() {
	return 2*m_radius*M_PI;

}

double  circle::getNumCorners() {
	return 0;
}


circle::~circle()
{
}
