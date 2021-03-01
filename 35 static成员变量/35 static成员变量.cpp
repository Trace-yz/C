#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class AA
{
public:
	AA(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
	
	//static���εľ�̬��Ա����
	//static int m_c;

	int getC()
	{
		m_c++;
		return m_c;
	}

	//��̬�ĳ�Ա����
	static int& getCC()
	{
		return m_c;
	}
private:
	static int m_c;
	int m_a;
	int m_b;
};

//���о�̬��Ա�����ĳ�ʼ��,һ��д������ⲿ�����۸ñ���������Ĺ���public�ﻹ��˽��private��
int AA::m_c = 100;


void test()
{
	static int a = 10;
	a++;
	cout << a << endl;
}
static void test1() //test1����ֻ���ڸ��ļ��б�ʹ�ã����ܱ������ļ�ʹ��
{

}
int main(void)
{
	AA a1(10, 20);
	AA a2(100, 200);

	cout << a1.getC() << endl;//101
	cout << a2.getC() << endl;//102

	//a1.getCC()=200;
	AA::getCC() = 200;
	cout << a1.getC() << endl;//201
	cout << a2.getC() << endl;//202

	//test(); //��ӡ11
	//test(); //��ӡ12 ��static���εı�����ε��ò������³�ʼ��
	return 0;
}