#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int func(int a, int b)
{
	cout << "fun1" << endl;
	return 0;
}

int func(int a, int b, int c)
{
	cout << "func(int,int,int)" << endl;
	return 0;
}
//1 ����һ�ֺ�������
typedef int(MY_FUNC)(int, int);

//2 ����һ��ָ�����ֺ������͵�ָ������
typedef int(*MY_FUNC_P)(int, int);
int main(void)
{
	//1 
	MY_FUNC *fp = NULL;
	fp = func;
	(*fp)(10, 20);


	//2
	MY_FUNC_P fp1=NULL;
	fp1 = func;
	(*fp1)(10, 20);

	//3
	int(*fp3)(int, int) = NULL;
	fp3 = func;
	(*fp3)(10, 20); //д��fp3(10,20)Ҳ���ԣ����������Զ���*����ͬ

	func(10, 20);
	func(10, 20, 30);
	fp3 = func; //fp3->func(int,int)

	//ʵ�����ٸ�����ָ�븳ֵ��ʱ���ǻᷢ����������ƥ���
	//�ڵ��ú���ָ���ʱ�������õĺ������Ѿ��̶���
	//����ָ�����Ҫ�����غ��������б�ͷ���������ȫƥ��
	int(*fp4)(int, int, int) = NULL;
	fp4 = func; //fp4->func(int,int,int)


	fp3(10,30);//���õ���func(int,int)
	//fp3(10, 20,30);

	fp4(10, 20, 30);
	return 0;
}