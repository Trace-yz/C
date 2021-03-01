#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:

#if 0
	Test()	//默认的无参构造函数
	{

	}
#endif	

	//显示的提供一个构造函数，默认的构造函数就不复存在
	Test(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	Test() {
		m_x = 0;
		m_y = 0;
	}
	void printT()
	{
		cout << "x=" << m_x << ",y=" << m_y << endl;
	}

	
#if 0
	~Test()	//默认的析构函数
	{

	}
#endif 

	//显示的提供一个析构函数，默认的析构函数就不复存在
	~Test()
	{
		cout << "test()...." << endl;
	}
private:
	int m_x;
	int m_y;
	
};


int main(void)
{
	Test t1;//调用Test的无参构造函数
	t1.printT();

	return 0;
}