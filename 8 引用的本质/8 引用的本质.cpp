#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct typeA
{
	int &a;
};

struct typeB
{
	int *a;
};

struct student
{
	int id;
	char name[64];
};

void motify(int *const a)//int *const a = main::&a
{
	*a = 300;
}
void motify2(int &a)//�����ǽ�������Ϊ�����������ݵ�ʱ�򣬱������������ǽ�ʵ��ȡ��ַ������
{                  //int &a = main::&a
	a = 300;//��һ�����ò�����ֵ��ʱ�򣬱���������������*�Ĳ���
}
//���������ȥ�о����õ�ʱ������Խ����õ���һ����ָ��ȥ�о�
//���ǵ�����ʹ�����ñ�̵�ʱ�򣬾Ͱ��������Ϊ�����ı����Ϳ���
int main(void)
{
	cout << "sizeof(struct tpyeA)" << sizeof(struct typeA) << endl;
	cout << "sizeof(struct tpyeB)" << sizeof(struct typeB) << endl;
	//������ռ�õĴ�С ��ָ������ȵġ�
	int a = 10;
	int &re = a; //����Ҫ��ʼ��������ҲҪ��ʼ�������ÿ�����һ��������

	int *const p = &a;
	//�������㣬���ÿ�����һ����ָ�롣

	motify(&a);
	motify2(a);
	return 0;
}