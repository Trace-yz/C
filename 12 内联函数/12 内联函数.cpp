#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define MAX(a,b) \
    ((a)>(b)?(a):(b))
//宏函数是由预处理器处理的，不会有任何的语法检查

int max(int a, int b)
{
	return (a > b) ? a : b;
}

inline void printAB(int a, int b) //注意内联函数是由编译器加载处理的，跟普通函数一样会做语法检查
{                                 //内联函数内不能有循环以及一定量的条件判断，否则被编译器检测出来后内联函数会变成普通函数使用
	cout << "a=" << a << ", b=" << b << endl; 
}

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 0;
	c=MAX(a, b);
	cout << "c=" << c << endl; //宏函数的缺陷是由于是预处理器处理的，无法检测语法，如果传入的是a++则会有一定问题。
#if 1
	for (int i = 0; i < 1000; i++) {
		a++;
		b++;
		printAB(a, b); //此时相当于把cout << "a=" << a << ", b=" << b << endl直接放到这，就避免了压栈出栈
	}
#endif
	return 0;
}