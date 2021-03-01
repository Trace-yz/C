#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class A
{
public:
	A(int a)
	{
		cout << "A()......" << a <<endl;
		m_a = a;
	}

	~A()
	{
		cout << "~A()......" << endl;
	}

	void printA()
	{
		cout << "a=" << m_a << endl;
	}

private:
	int m_a;

};

//���캯���ĳ�ʼ���б�
class B
{
public:
	B(int b, A &a1, A &a2) : m_a1(a1), m_a2(a2) //��ʼ���б�����m_a1��m_a2�Ŀ������캯��
	{
		cout << "B(int , A&, A&)....." << endl;
		m_b = b;
	}

	//����Ĺ���˳�����ʼ���б�˳���޹�
	B(int b, int a1, int a2) : m_a1(a1), m_a2(a2) //��ʼ���б�����m_a1��m_a2���вι��캯��
	{
		cout << "B(int , int, int)....." << endl;
		m_b = b;
	}

	void printB()
	{
		cout << "B = " << m_b << endl;
		m_a1.printA();
		m_a2.printA();
	}
	~B()
	{
		cout << "~B()...." << endl;
	}
private:
	int m_b;
	//����Ĺ���˳�����ʼ���б�˳���޹�
	//���Ǹ���Ա����Ķ���˳���й�
	A m_a2;
	A m_a1;
};

class ABC
{
public:
	ABC(int a, int b, int c, int m):m_m(m) //�����ĳ�ʼ��һ��Ҫд�ڳ�ʼ���б���
	{
		cout << "ABC(int,int,int)...." << endl;
		m_a = a;
		m_b = b;
		m_c = c;

	}

	~ABC()
	{
		cout << "~ABC()....." << endl;
	}
private:
	int m_a;
	int m_b;
	int m_c;
	const int m_m;//����
};

class ABCD
{
public:
	ABCD(int a, int b, int c, int d,int m) :m_abc(a, b, c,m),m_d(d)
	{

	}

	ABCD(ABC &abc, int d) :m_abc(abc), m_d(d)
	{

	}
private:
	int m_d;
	ABC m_abc;
};
void test1()
{
	A a1(10), a2(100);

	B b(1000, a1, a2);

	b.printB();
}
int main(void)
{

	//test1();

	B b(10, 20, 300);
	b.printB();

	ABC abc(10, 20, 30,666);

	ABCD abcd(1, 2, 3, 4,666);

	ABCD abcd1(abc, 40);

	return 0;
}