#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//立方体类
class Cube
{
public:
	void setABC(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}

	int getArea()
	{
		return (m_a*m_b) * 2 + (m_a*m_c) * 2 + (m_b*m_c) * 2;
	}

	int getVolume()
	{
		return (m_a*m_b*m_c);
	}

	int getA()
	{
		return m_a;
	}

	int getB()
	{
		return m_b;
	}

	int getC()
	{
		return m_c;
	}

	bool judgeCube(Cube *another)
	{
		if (m_a == another->m_a &&  //同类可访问私有成员，不同类不可以访问私有成员
			m_b == another->getB() &&
			m_c == another->getC()) {
			return true;
		}
		else {
			return false;
		}
	}
private:
	int m_a;
	int m_b;
	int m_c;
};

//全局函数
bool judgeCube(Cube &c1, Cube &c2)
{
	if (c1.getA() == c2.getA() &&
		c1.getB() == c2.getB() &&
		c1.getC() == c2.getC()) {
		return true;
	}
	else {
		return false;
	}
}
int main(void)
{
	Cube c1;
	c1.setABC(10,20,30);

	Cube c2;
	c2.setABC(10, 20, 30);

	cout << "c1的体积是" << c1.getVolume() << endl;
	cout << "c1的面积是" << c1.getArea() << endl;

	if (judgeCube(c1,c2) == true) {
		cout << "两个立方体相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}

	cout << "----------" << endl;

	if(c1.judgeCube(&c2) == true){
		cout << "两个立方体相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}
	return 0;
}
