#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class A
{
public:
#if 0
	A()
	{
		m_a = 0;
		m_b = 0;
	}
#endif
#if 0
	//默认的拷贝构造函数
	A(const A &another)
	{
		m_a = another.m_a;
		m_b = another.m_b;
	}
#endif
	A()
	{

	}
#if 0
	//默认的析构函数
	~A()
	{

    }
#endif
private:
	int m_a;
	int m_b;
};

//类中会有一个默认的无参构造函数
//当没有任何显示的构造函数（包括显示的无参，显示的有参，显示的拷贝构造）时，默认无参构造函数就会出现。反之，当类中有显示的构造函数（包括显示的无参，显示的有参，显示的拷贝构造）时，默认的无参构造函数就会失效。

//类中会有一个默认的拷贝构造函数
//当没有显示的拷贝构造函数时，默认的拷贝构造就会出现。反之，当类中有显示的拷贝构造函数时，默认的拷贝构造函数就会失效。

//类中会有一个默认的析构函数
//当没有显示的析构函数时，默认的析构函数就会出现。反之，当类中有显示的析构函数时，默认的析构函数就会失效。

int main(void)
{
	A a;

	A a1(a);
	return 0;
}