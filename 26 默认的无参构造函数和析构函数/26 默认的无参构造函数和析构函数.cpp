#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:

#if 0
	Test()	//Ĭ�ϵ��޲ι��캯��
	{

	}
#endif	

	//��ʾ���ṩһ�����캯����Ĭ�ϵĹ��캯���Ͳ�������
	Test(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	Test() {
		m_x = 0;
		m_y = 0;
	}
	void printT()
	{
		cout << "x=" << m_x << ",y=" << m_y << endl;
	}

	
#if 0
	~Test()	//Ĭ�ϵ���������
	{

	}
#endif 

	//��ʾ���ṩһ������������Ĭ�ϵ����������Ͳ�������
	~Test()
	{
		cout << "test()...." << endl;
	}
private:
	int m_x;
	int m_y;
	
};


int main(void)
{
	Test t1;//����Test���޲ι��캯��
	t1.printT();

	return 0;
}