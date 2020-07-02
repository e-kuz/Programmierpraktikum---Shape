#pragma once
class shape
{
public:
	shape();
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual double getNumCorners() = 0;

	~shape();
};

