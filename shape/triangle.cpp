#include "triangle.h"
#include <math.h>


triangle::triangle(point a, point b, point c) : m_a(a), m_b(b), m_c(c)
{
}

double triangle::getArea() {
	return abs(m_a.getX()*(m_b.getY() - m_c.getY()) +
		m_b.getX()*(m_c.getY() - m_a.getY()) +
		m_c.getX()*(m_a.getY() - m_b.getY())) / 2.;
}

double triangle::getPerimeter() {
	double sideAB = sqrt(pow(1.*m_a.getX() - m_b.getX(), 2) + pow(1.*m_a.getY() - m_b.getY(), 2));
	double sideAC = sqrt(pow(1.*m_a.getX() - m_c.getX(), 2) + pow(1.*m_a.getY() - m_c.getY(), 2));
	double sideBC = sqrt(pow(1.*m_b.getX() - m_c.getX(), 2) + pow(1.*m_b.getY() - m_c.getY(), 2));
	return sideAB + sideAC + sideBC;
}

double triangle::getNumCorners() {
	return 3;
}

triangle::~triangle()
{
}
