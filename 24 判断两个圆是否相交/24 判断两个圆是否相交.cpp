#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;

//点类
class Point
{
public:
	void setXY(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	//计算两点之间距离的方法
	double pointDistance(Point &another)  //改写为指针是Point *another
	{
		int d_x = m_x - another.m_x;      //改写为指针是another->m_x
		int d_y = m_y - another.m_y;      //改写为指针是another->m_y

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

	//判断圆是否相交
	bool isIntersection(Circle &another)    //改写为指针是 Circle *another
	{
		//两个圆的半径之和
		int rr = m_r + another.m_r;          //改写为指针是another->m_r
		//两圆心之间距离
		double dis = p0.pointDistance(another.p0);     //改写为指针是p0.pointDistance(&(another->p0))

		if (dis <= rr) {
			//相交
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
	cout << "请输入第一个圆的半径" << endl;
	cin >> r;
	c1.setR(r);
	cout << "请输入第一个圆的x" << endl;
	cin >> x;
	cout << "请输入第一个圆的y" << endl;
	cin >> y;
	c1.setXY(x, y);

	cout << "请输入第二个圆的半径" << endl;
	cin >> r;
	c2.setR(r);
	cout << "请输入第二个圆的x" << endl;
	cin >> x;
	cout << "请输入第二个圆的y" << endl;
	cin >> y;
	c2.setXY(x, y);

	if (c1.isIntersection(c2) == true) {
		cout << "相交" << endl;
	}
	else
	{
		cout << "不相交" << endl;
	}
	return 0;
}
