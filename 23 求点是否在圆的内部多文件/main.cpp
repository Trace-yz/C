#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include "Circle.h"
#include "Point.h"
using namespace std;

int main(void)
{
	Circle c;
	c.setR(4);
	c.setXY(2, 2);

	Point p;
	p.setXY(8, 8);

	if (c.judgePoint(p) == true)
	{
		cout << "圆内部" << endl;
	}
	else
	{
		cout << "圆外部" << endl;
	}

	return 0;
}