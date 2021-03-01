#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "Test()..." << endl;
		m_x = 0;
		m_y = 0;
	}

	Test(int x, int y)
	{
		cout << "Test(int x,int y)..." << endl;
		m_x = x;
		m_y = y;
	}

	Test(const Test &another)
	{
		cout << "Test(const Test &)..." << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	~Test()
	{
		cout << "~Test()......" << endl;
	}

	void operator=(const Test &another)
	{
		cout << "operator = (const Test &)"<<endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	void printT()
	{
		cout << "x=" << m_x << ",m_y =" << m_y << endl;
	}
private:
	int m_x;
	int m_y;
};

//场景1
//析构函数调用的顺序，跟构造相反，谁先构造的，谁后析构
void test1()
{
	Test t1(10, 20);
	Test t2(t1);//等价于Test t2=t1;

}

//场景2
void test2()
{
	Test t1(10, 20);
	Test t2;

	t2 = t1;//赋值操作符
}

//场景3
void func(Test t) //Test t = test3::t1 等价于调用test t的拷贝构造函数
{
	cout << "func begin..." << endl;
	t.printT();
	cout << "func end..." << endl;
}
void test3()
{
	cout << "test3 begin..." << endl;
	
	Test t1(10, 20);
	func(t1);

	cout << "test3 end..." << endl;
}
//场景4
Test func2()
{
	cout << "func2 begin..." << endl;
	Test temp(10, 20);
	temp.printT();

	cout << "func2 end..." << endl;
	return temp;
} //在return temp时会有一个匿名的对象=temp，调用匿名对象的拷贝构造函数
void test4()
{
	cout << "test4 begin..." << endl;
	func2(); //返回一个匿名对象。当一个函数返回一个匿名对象的时候，如果该函数外部没有任何的变量去接收它，这个匿名对象将不会再被使用。主要是因为找不到该匿名对象，编译器会直接将这个匿名对象回收掉
             //而不是等待整个函数（test4）执行完毕在回收。
	//匿名对象就被回收了，同时也被析构了
	cout << "test4 end..." << endl;

}

//场景5
void test5()
{
	cout << "test5 begin..." << endl;
	Test t1 = func2(); //并不会触发t1的拷贝构造，而是将匿名对象起个名字叫做t1.此时编译器不会回收
	cout << "test5 end..." << endl;
}

//场景6
void test6()
{
	cout << "test6 begin..." << endl;
	Test t1; //t1已经被初始化了

	t1 = func2(); //调用t1的赋值操作符，赋值完后编译器马上回收该匿名对象，此对象被析构

	t1.printT();
	cout << "test6 end..." << endl;
}
int main(void)
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}