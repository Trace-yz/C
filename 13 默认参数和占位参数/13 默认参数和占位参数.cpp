#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

void func(int a=666)
{
	cout << "a=" << a << endl;
}

//�����������
int get_volume(int len, int width, int height=10)
{
	cout << "len=" << len << endl;
	cout << "w=" << width << endl;
	cout << "h=" << height << endl;

	return len * width*height;
}

void func2(int x,int=0)//ռλ��������0
{
	cout << "x=" << x << endl;
}
int main(void)
{
	int value = 10;

	func(value);

	int len = 10;
	int w = 20;
	int h = 30;
	cout<<"�����"<<get_volume(w,h)<<endl;//��ʱ���������ʵ��ֵ���β���len��width

	func2(199,10);
	func2(200);
	return 0;
}