#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int func(int a, int b)
{
	cout << "fun1" << endl;
	return 0;
}

int func(int a, int b, int c)
{
	cout << "func(int,int,int)" << endl;
	return 0;
}
//1 定义一种函数类型
typedef int(MY_FUNC)(int, int);

//2 定义一个指向这种函数类型的指针类型
typedef int(*MY_FUNC_P)(int, int);
int main(void)
{
	//1 
	MY_FUNC *fp = NULL;
	fp = func;
	(*fp)(10, 20);


	//2
	MY_FUNC_P fp1=NULL;
	fp1 = func;
	(*fp1)(10, 20);

	//3
	int(*fp3)(int, int) = NULL;
	fp3 = func;
	(*fp3)(10, 20); //写出fp3(10,20)也可以，编译器会自动加*，上同

	func(10, 20);
	func(10, 20, 30);
	fp3 = func; //fp3->func(int,int)

	//实际上再给函数指针赋值的时候，是会发生函数重载匹配的
	//在调用函数指针的时候，所调用的函数就已经固定了
	//函数指针必须要与重载函数参数列表和返回类型完全匹配
	int(*fp4)(int, int, int) = NULL;
	fp4 = func; //fp4->func(int,int,int)


	fp3(10,30);//调用的是func(int,int)
	//fp3(10, 20,30);

	fp4(10, 20, 30);
	return 0;
}