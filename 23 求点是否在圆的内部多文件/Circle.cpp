#include "Circle.h"


void Circle::setXY(int x, int y)
	{
		x0 = x;
		y0 = y;
	}

void Circle::setR(int r)
	{
		m_r = r;
	}

	//�ṩһ���ж� ���Ƿ���Բ��
	//true���ڲ���false���ⲿ
bool Circle::judgePoint(Point &p)
	{
		int dd;
		dd = (p.getX() - x0)*(p.getX() - x0) + (p.getY() - y0)*(p.getY() - y0);

		if (dd > m_r*m_r) {
			return false;
		}
		else {
			return true;
		}

	}
