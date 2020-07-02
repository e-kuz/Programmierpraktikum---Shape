#include "rectangle.h"


rectangle::rectangle(point upperLeft, double width, double height) : m_upperLeft(upperLeft), m_width(width), m_height(height)
{
}

double rectangle::getArea() {
	return m_width*m_height;
}

double rectangle::getPerimeter() {
	return 2 * (m_width + m_height);
}

double  rectangle::getNumCorners() {
	return 4;
}

rectangle::~rectangle()
{
}
