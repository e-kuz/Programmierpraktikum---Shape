#include "point.h"


point::point() : m_x(0), m_y(0)
{
}

point::point(int x, int y) : m_x(x), m_y(y)
{
}



int point::getX() {
	return m_x;
}
int point::getY() {
	return m_y;
}

void point::setCoord(int x, int y) {
	m_x = x;
	m_y = y;
}




point::~point()
{
}
