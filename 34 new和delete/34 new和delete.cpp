#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "Test()" << endl;
		m_a = 0;
		m_b = 0;
	}
	Test(int a, int b)
	{
		cout << "Test(int,int)......" << endl;
		m_a = a;
		m_b = b;
	}

	void printT()
	{
		cout << "printT:"<<m_a<<","<<m_b<< endl;
	}

	~Test()
	{
		cout << "~Test()" << endl;
	}
private:
	int m_a;
	int m_b;
};
//C������
void test1()
{
	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	if (p != NULL)
	{
		free(p);
		//delete p;
		p = NULL;
	}

	int *array_p = (int *)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
	{
		array_p[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d", array_p[i]);
	}
	printf("\n");

	if (array_p != NULL)
	{
		free(array_p);
		array_p = NULL;
	}

	cout << "==========" << endl;

	Test *tp = (Test *)malloc(sizeof(Test));
	tp->printT();
	if (tp != NULL)
	{
		free(tp);
		tp = NULL;
	}
}

//malloc free�Ǻ�������׼�⣬��Ҫ����ͷ�ļ�stdlib.h��new��delete�ǹؼ���
//new���ڶ��ϳ�ʼ��һ�������ʱ�򣬻ᴥ������Ĺ��캯������malloc����
//free���������ܴ���һ�������������������delete����ͬʱ����һ���������������
//C++��
void test2()
{
	int *p = new int;
	*p = 10;
	if (p != NULL)
	{
		delete p;
		p = NULL;
	}

	int *array_p = new int[10];
	for (int i = 0; i < 10; i++)
	{
		array_p[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array_p[i];
	}
	cout << endl;

	if (array_p != NULL)
	{
		delete[]array_p;
		array_p = NULL;
	}

	cout << "=============" << endl;
	//Test *tp = new Test(10, 20);//�����вι���

	Test *tp = new Test();//�����޲ι���
	tp->printT();
	if (tp != NULL)
	{
		delete tp;
		tp = NULL;
	}

}
int main(void)
{
	test1();
	cout << "------------" << endl;
	test2();
	return 0;
}