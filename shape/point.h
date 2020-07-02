#pragma once
class point
{
public:
	point();
	point(int x, int y);
	int getX();
	int getY();
	void setCoord(int x, int y);


	~point();

private:
	int m_x;
	int m_y;
};

