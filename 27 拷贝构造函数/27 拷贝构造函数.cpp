#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


class  Test
{
public:
	Test()
	{
		m_x = 0;
		m_y = 0;
	}
	Test(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	void printT()
	{
		cout << "x=" << m_x << ",y=" << m_y << endl;
	}

#if 0
	//显示的拷贝构造函数
	Test(const Test &another)
	{
		cout << "Test(const Test &)..." << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}
#endif
#if 1
	//会有一个默认的拷贝构造函数
	Test(const Test &another)
	{
		m_x = another.m_x;
		m_y = another.m_y;
	}
#endif
	//赋值操作符
	void operator=(const Test &another)
	{
		m_x = another.m_x;
		m_y = another.m_y;
	}
private:
	int m_x;
	int m_y;

};


int main(void)
{
	Test t1(100,200);

	Test t2(t1);

	t2.printT();

	Test t3 = t1; //依然是初始化t3的时候调用t3的拷贝构造函数,等价于Test t3(t1)

	Test t4;
	t4 = t1; //调用的不是t4的拷贝构造函数，而是t4的赋值操作符函数
	return 0;
}
