#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//�����е��ù�����Σ�յ���Ϊ
class MyTest
{
public:
	MyTest(int a, int b, int c)
	{
		_a = a;
		_b = b;
		_c = c;
	}

	MyTest(int a, int b)
	{
		_a = a;
		_b = b;
		MyTest(a, b, 100);//�����µ���������
	}

	~MyTest()
	{
		printf("MyTest~: %d,    %d,    %d\n", _a, _b_, _c);
	}

	int getC()
	{
		return _c;
	}
	void setC(int va1)
	{
		_c = va1;
	}
private:
	int _a;
	int _b;
	int _c;
};
int main(void)
{
	MyTest t1(1, 2);
	printf("c: %d\n", t1.getC());

	return 0;
}