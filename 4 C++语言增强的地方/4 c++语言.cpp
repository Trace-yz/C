#define _CRT_SECURE_NO_WARNINGS
#include <iostream>



using namespace std;

//C++���Զ�ȫ�ֱ����Ķ�����������ǿ��
int g_val; //bss��
//int g_val = 20;

struct  student
{
	int id;
	char name[64];
};
void test1()
{
	//C++�ж���һ������ ���������涨��
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

//bool����
void test3()
{
	//trueΪ1 falseΪ0 ����ֻ��ȡ������ֵ
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
	//��ֵ ��ֵ
	c = a < b ? a : b;
	cout << c << endl;
	//��Ŀ��������Ե���ֵ
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
	*p = 20; //�ı���Ǳ�������ʱ���ٵ�temp����
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

