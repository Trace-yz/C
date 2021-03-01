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
	
	//static修饰的静态成员变量
	//static int m_c;

	int getC()
	{
		m_c++;
		return m_c;
	}

	//静态的成员方法
	static int& getCC()
	{
		return m_c;
	}
private:
	static int m_c;
	int m_a;
	int m_b;
};

//类中静态成员变量的初始化,一定写在类的外部，无论该变量是在类的公有public里还是私有private里
int AA::m_c = 100;


void test()
{
	static int a = 10;
	a++;
	cout << a << endl;
}
static void test1() //test1函数只能在该文件中被使用，不能被其他文件使用
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

	//test(); //打印11
	//test(); //打印12 被static修饰的变量多次调用不会重新初始化
	return 0;
}