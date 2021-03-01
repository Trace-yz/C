#pragma once

class circle
{
public:
    //设置半径
	void setR(double r);
	//得到半径
	double getR();
	//周长
	double getArea();
	//面积
	double getGirth();

private:
	double m_r;
	double m_area;
	double m_girth;
};

