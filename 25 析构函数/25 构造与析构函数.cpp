#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test 
{
public:
#if 0
	void init(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
#endif
	//Test��Ĺ��캯��
	//�ڶ��󱻴�����ʱ��������ʼ������ĺ���
	Test()//�޲����Ĺ��캯��
	{
		m_x = 0;
		m_y = 0;
	}
	Test(int x, int y)
	{
		m_y = y;
		m_x = x;
	    name = (char *)malloc(100);
		strcpy(name, "zhangsan");
	}
	Test(int x)
	{
		m_x = x;
		m_y = 0;
	}
	void printT()
	{
		cout << "x=" << m_x << ",y=" << m_y << endl;
	}

	//���������͹��캯����û�з���ֵ
	//��������û���β�
	~Test()
	{
		cout << "test()...." << endl;
		if (name != NULL)
		{
			free(name);
			cout << "free success" << endl;
		}
	}
private:
	int m_x;
	int m_y;
	char *name;
};

void test1()
{
	Test t1(10, 20);
	t1.printT();

	//��һ������ϵͳ����֮ǰ��Ҫ�Զ�������������������������
} //����ִ�е�����Ҵ�����ʱ�������������
int main(void)
{
#if 0
	Test t1(10,20);

	t1.printT();
	//t1.init(10, 20);

	Test t2(100);
	t2.printT();

	Test t3;//��������޲������캯��
	t3.printT();
#endif

	test1();
	return 0;
}