#pragma once
#include "Point.h"
class Circle
{
public:
	void setXY(int x, int y);

	void setR(int r);

	//提供一个判断 点是否在圆内
	//true在内部，false在外部
	bool judgePoint(Point &p);

private:
	int x0;
	int y0;
	int m_r;

};

