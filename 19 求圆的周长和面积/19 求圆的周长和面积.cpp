#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//�õ�Բ���ܳ�
double getCircleGirth(double r)
{
	return 2 * 3.14*r;
}

//�õ�Բ�����
double getCircleArea(double r)
{
	return 3.14*r*r;
}

//���������ʵ��
//Բ��
class Circle
{
public:
	void setR(double r)
	{
		m_r = r;
	}

	double getR()
	{
		return m_r;
	}

	double getGirth()
	{
		return 2 * 3.14*m_r;
	}

	double getArea()
	{
		return m_r * m_r*3.14;
	}
private:
	double m_r;//Բ��˽�г�Ա �뾶


};

class Circle2
{
public:
	void setR(double r)
	{
		m_r = r;
	}

	double getR()
	{
		return m_r;
	}

	//double getArea()
	//{
		//return m_area;
	//}

	//double getGirth()
	//{
		//return m_girth;
	//}

private:
	double m_r;
	//double m_girth= m_r * 3.14 * 2;//Բ���ܳ�  ������˽�б���������ʱ��������ֵ
	//double m_area = m_r * m_r * 2;//Բ�����
};
int main(void)
{
	double r = 10.0;//Բ�İ뾶

	double g = 0;
	double a = 0;

	g = getCircleGirth(r);
	a = getCircleArea(r);
	cout << "Բ�İ뾶��" << r << endl;
	cout << "Բ���ܳ���" << g << endl;
	cout << "Բ�������" << a << endl;

	cout << "----------" << endl;

	Circle c;

	c.setR(10.0);
	cout << "Բ�İ뾶��" << c.getR() << endl;
	cout << "Բ���ܳ���" << c.getGirth() << endl;
	cout << "Բ�������" << c.getArea() << endl;

	cout << "---------------" << endl;

	Circle2 c2;
	c2.setR(10.0);
	cout << "Բ�İ뾶��" << c2.getR() << endl;
	//cout << "Բ���ܳ���" << c2.getGirth() << endl;
	//cout << "Բ�������" << c2.getArea() << endl;
	return 0;
}

