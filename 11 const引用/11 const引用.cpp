#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//3、const修饰引用，一般跟const修饰指针的用途是一样的。都是作为函数参数，
//保证该参数是输入参数，并且是只读的，在函数内部改不了外部的值。
void printB(const int &re)
{
	cout << "re=" << re << endl;
}

int main(void)

{
	const int a = 10;//1、如果想对一个常量进行引用，则必须是一个const引用。
	const int &re = a;

	int b = 10;
	const int &re2 = b;//2、相反如果一个普通变量，用一个const引用接收时可以的。

	cout << "b=" << b << endl;
	cout << "re2=" << re2 << endl;

	//re2 = 300;
	b = 30;
	cout << "b=" << b << endl;
	cout << "re2=" << re2 << endl; //*re2

	printB(a);
	printB(b);


	const int &re3 = 10;
	//const int &re3 = 10; re3 = &10, 编译器临时开辟一个变量TEMP
	//const int &re3 = temp
	int c = 50;
	const int *p = &c;
	cout << "c=" << c << endl;
	cout << "*p=" << *p << endl;
	cout << "&c=" << &c << endl;
	cout << "p=" << p << endl;
	cout << "----------------" << endl;
	c = 80;
	cout << "c=" << c << endl;
	cout << "*p=" << *p << endl;
	cout << "&c=" << &c << endl;
	cout << "p=" << p << endl;
	return 0;
}

