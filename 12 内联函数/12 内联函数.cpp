#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define MAX(a,b) \
    ((a)>(b)?(a):(b))
//�꺯������Ԥ����������ģ��������κε��﷨���

int max(int a, int b)
{
	return (a > b) ? a : b;
}

inline void printAB(int a, int b) //ע�������������ɱ��������ش���ģ�����ͨ����һ�������﷨���
{                                 //���������ڲ�����ѭ���Լ�һ�����������жϣ����򱻱���������������������������ͨ����ʹ��
	cout << "a=" << a << ", b=" << b << endl; 
}

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 0;
	c=MAX(a, b);
	cout << "c=" << c << endl; //�꺯����ȱ����������Ԥ����������ģ��޷�����﷨������������a++�����һ�����⡣
#if 1
	for (int i = 0; i < 1000; i++) {
		a++;
		b++;
		printAB(a, b); //��ʱ�൱�ڰ�cout << "a=" << a << ", b=" << b << endlֱ�ӷŵ��⣬�ͱ�����ѹջ��ջ
	}
#endif
	return 0;
}