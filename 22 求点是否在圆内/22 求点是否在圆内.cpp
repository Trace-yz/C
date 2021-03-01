#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//����
class Point
{
public:
	void setXY(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	int getX()
	{
		return m_x;
	}

	int getY()
	{
		return m_y;
	}
private:
	int m_x;
	int m_y;
};
//Բ��
class Circle
{
public:
	void setXY(int x, int y)
	{
		x0 = x;
		y0 = y;
	}

	void setR(int r)
	{
		m_r = r;
	}

	//�ṩһ���ж� ���Ƿ���Բ��
	//true���ڲ���false���ⲿ
	bool judgePoint(Point &p)
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
private:
	int x0;
	int y0;
	int m_r;

};
int main(void)
{
	Circle c;
	c.setXY(2, 2);
	c.setR(4);

	Point p;
	p.setXY(8,8);

	if (c.judgePoint(p) == true)
	{
		cout << "Բ���ڲ�" << endl;
		
	}
	else
	{
		cout << "Բ���ⲿ" << endl;
	}
	return 0;
}
