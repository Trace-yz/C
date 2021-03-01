#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char * getmem(int num)
{
	char *p = NULL;
	p = (char*)malloc(num);
	return p;
}
int getmem2(char **pp, int num)
{
	char *p = NULL;
	p = (char*)malloc(num);
	*pp = p;
	return 0;
}
int getA1()
{
	int a = 10;
	return a;
}
int getA2(int *a)
{
	
	*a = 10;
	return 0;
}

//引用作为返回值，不要返回局端变量的引用
int& getA3()
{
	int a = 10;
	return a;
}//int &temp = a;

int &getA4()
{
	static int a = 10;
	return a;
}
int main(void)
{
	int a = 0;
	char *pp = NULL;
	
	a = getA1();
	pp = getmem(10);

	char *bb = NULL;
	char cc = 'a';
	bb = &cc;
	cout << "*bb=" << *bb << endl;
	getmem2(&bb,10);
	cout << "*bb=" << *bb << endl;


	cout << "---------------" << endl;
	int main_a = 0;
	main_a = getA3();//main_a=temp;数值拷贝
	cout << "main_a" << main_a << endl;

	cout << "---------------" << endl;
#if 0
	int &main_a_re = getA3();
	cout << "main_a_re" << main_a_re << endl;
	cout << "main_a_re" << main_a_re << endl;
#endif
	int &main_a_re = getA4();
	cout << "main_a_re" << main_a_re << endl;
	cout << "main_a_re" << main_a_re << endl;

	//引用如果当函数返回值的话，函数可以当左值
	getA4() = 1000;
	return 0;


}