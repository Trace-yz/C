#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

void func(int a=666)
{
	cout << "a=" << a << endl;
}

//求立方体体积
int get_volume(int len, int width, int height=10)
{
	cout << "len=" << len << endl;
	cout << "w=" << width << endl;
	cout << "h=" << height << endl;

	return len * width*height;
}

void func2(int x,int=0)//占位参数等于0
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
	cout<<"体积是"<<get_volume(w,h)<<endl;//此时函数里接收实参值的形参是len和width

	func2(199,10);
	func2(200);
	return 0;
}