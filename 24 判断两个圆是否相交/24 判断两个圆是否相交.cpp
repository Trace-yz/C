#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
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

	//��������֮�����ķ���
	double pointDistance(Point &another)  //��дΪָ����Point *another
	{
		int d_x = m_x - another.m_x;      //��дΪָ����another->m_x
		int d_y = m_y - another.m_y;      //��дΪָ����another->m_y

		double dis = sqrt(d_x*d_x + d_y * d_y);
		return dis;
	}
private:
	int m_x;
	int m_y;
};

class Circle
{
public:
	void setR(int r)
	{
		m_r = r;
	}
	
	void setXY(int x, int y)
	{
		p0.setXY(x, y);
	}

	//�ж�Բ�Ƿ��ཻ
	bool isIntersection(Circle &another)    //��дΪָ���� Circle *another
	{
		//����Բ�İ뾶֮��
		int rr = m_r + another.m_r;          //��дΪָ����another->m_r
		//��Բ��֮�����
		double dis = p0.pointDistance(another.p0);     //��дΪָ����p0.pointDistance(&(another->p0))

		if (dis <= rr) {
			//�ཻ
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	int m_r;
	Point p0;
};
int main(void)
{

	Circle c1;
	Circle c2;

	int x, y, r;
	cout << "�������һ��Բ�İ뾶" << endl;
	cin >> r;
	c1.setR(r);
	cout << "�������һ��Բ��x" << endl;
	cin >> x;
	cout << "�������һ��Բ��y" << endl;
	cin >> y;
	c1.setXY(x, y);

	cout << "������ڶ���Բ�İ뾶" << endl;
	cin >> r;
	c2.setR(r);
	cout << "������ڶ���Բ��x" << endl;
	cin >> x;
	cout << "������ڶ���Բ��y" << endl;
	cin >> y;
	c2.setXY(x, y);

	if (c1.isIntersection(c2) == true) {
		cout << "�ཻ" << endl;
	}
	else
	{
		cout << "���ཻ" << endl;
	}
	return 0;
}
