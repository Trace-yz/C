#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//3��const�������ã�һ���const����ָ�����;��һ���ġ�������Ϊ����������
//��֤�ò��������������������ֻ���ģ��ں����ڲ��Ĳ����ⲿ��ֵ��
void printB(const int &re)
{
	cout << "re=" << re << endl;
}

int main(void)

{
	const int a = 10;//1��������һ�������������ã��������һ��const���á�
	const int &re = a;

	int b = 10;
	const int &re2 = b;//2���෴���һ����ͨ��������һ��const���ý���ʱ���Եġ�

	cout << "b=" << b << endl;
	cout << "re2=" << re2 << endl;

	//re2 = 300;
	b = 30;
	cout << "b=" << b << endl;
	cout << "re2=" << re2 << endl; //*re2

	printB(a);
	printB(b);


	const int &re3 = 10;
	//const int &re3 = 10; re3 = &10, ��������ʱ����һ������TEMP
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

