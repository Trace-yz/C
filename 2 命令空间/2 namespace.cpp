#include <iostream>
//iostream�����׼���ṩ��һ���������ռ�Ķ�������׼������ռ��std
//��ʽ2��
#if 0
using std::cout; //��������ռ��е�һ������
using std::endl;
using std::cin;
#endif
//��ʽ3
using namespace std;
int main(void)
{
	int a = 0;
#if 0

	//��ʽ1��
	std::cout << "nihao shijie" << std::endl;
	std::cout << "nihuai shijie" << std::endl;
#endif
	cout << "nihao shijie" << endl;
	cin >> a;
	return 0;
}
