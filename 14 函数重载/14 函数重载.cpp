#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//�����β��б������ĸ������������ͣ�����˳��
//�������أ���������ͬ�������б�ͬ
//��������ֵ�����ǹ��ɺ������ص�����
int func(int a, int b)
{
	cout << "func1" << endl;
	return 0;
}
//���Ҫ�Ǻ������صĻ�����ҪдĬ�ϲ�����Ϊ�˱�����ó��ֺ�����ͻ
int func(int a,int b,int)
{
	cout << "func2" << endl;
	return 0;
}


int func(int a, char *str)
{
	cout << "func3" << endl;
	return 0;
}

void print1(int a)
{
	cout << "print1" << endl;
	cout << "a=" << a << endl;

}

void print1(double b)
{
	cout << "print2" << endl;
	cout << "b=" << b << endl;
}

void print1(char ch)
{
	cout << "print 3" << endl;
	cout << "ch=" << ch << endl;
}
int main(void)
{
	//func(10,20,30);
	char a = 'n';
	func(10,&a);

	print1(10);

	print1(10.10);

	print1(3.1f);

	print1('a');

	//print1("itcast");
	//1 ����ܹ��ϸ�ƥ���������ȫƥ���
	//2 ���û����ȫƥ�䣬������ʽת��
	//3 ������϶�ƥ�䲻��������ʧ��
	return 0;
}