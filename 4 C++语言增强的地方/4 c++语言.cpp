#define _CRT_SECURE_NO_WARNINGS
#include <iostream>



using namespace std;

//C++语言对全局变量的定义检测能力增强了
int g_val; //bss段
//int g_val = 20;

struct  student
{
	int id;
	char name[64];
};
void test1()
{
	//C++中定义一个变量 可以随用随定义
	int i = 0;

	for (int i = 0; i < 10; i++)
	{

	}

	int b = 20;
	cout << "b" << b << endl;

}
void test2()
{
	student s1;
	s1.id = 20;
}
int foo()
{
	return 10;
}
int g(int a)
{
	return 10;
}

//bool类型
void test3()
{
	//true为1 false为0 而且只能取这两个值
	bool flag = true;
	flag = false;

	flag = true;
	cout << "flag(true)" << flag << endl;
	flag = false;
	cout << "flag(false)" << flag << endl;
	//flag = 20;
	//cout << "flag(20)" << flag << endl;

	cout << sizeof(flag) << endl;

}
void test4()
{
	int a = 10;
	int b = 20;
	int c = 0;
	//左值 右值
	c = a < b ? a : b;
	cout << c << endl;
	//三目运算符可以当左值
	(a < b ? a : b) = 50;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
#define A 10
	//const int f = 10;
}
void test5()
{
	const int a = 10;
	
	int *p = (int*)&a;
	*p = 20; //改变的是编译器临时开辟的temp变量
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;
	int array[a] = { 0 };
	cout << "A=" << A << endl;
	//cout << "f=" << f << end;
}
enum season
{
	SPR = 0,
	SUM,
	AUT,
	WIN
};

void test6()
{
	enum season s = SPR;
	if (s == AUT) {

	}
}
int main(void)
{
	//test2();
	//test3();
	//test4();
	//test5();
	test6();

	//g(10, 20, 30);

	return 0;
}

