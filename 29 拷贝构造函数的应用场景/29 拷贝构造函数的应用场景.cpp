#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "Test()..." << endl;
		m_x = 0;
		m_y = 0;
	}

	Test(int x, int y)
	{
		cout << "Test(int x,int y)..." << endl;
		m_x = x;
		m_y = y;
	}

	Test(const Test &another)
	{
		cout << "Test(const Test &)..." << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	~Test()
	{
		cout << "~Test()......" << endl;
	}

	void operator=(const Test &another)
	{
		cout << "operator = (const Test &)"<<endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	void printT()
	{
		cout << "x=" << m_x << ",m_y =" << m_y << endl;
	}
private:
	int m_x;
	int m_y;
};

//����1
//�����������õ�˳�򣬸������෴��˭�ȹ���ģ�˭������
void test1()
{
	Test t1(10, 20);
	Test t2(t1);//�ȼ���Test t2=t1;

}

//����2
void test2()
{
	Test t1(10, 20);
	Test t2;

	t2 = t1;//��ֵ������
}

//����3
void func(Test t) //Test t = test3::t1 �ȼ��ڵ���test t�Ŀ������캯��
{
	cout << "func begin..." << endl;
	t.printT();
	cout << "func end..." << endl;
}
void test3()
{
	cout << "test3 begin..." << endl;
	
	Test t1(10, 20);
	func(t1);

	cout << "test3 end..." << endl;
}
//����4
Test func2()
{
	cout << "func2 begin..." << endl;
	Test temp(10, 20);
	temp.printT();

	cout << "func2 end..." << endl;
	return temp;
} //��return tempʱ����һ�������Ķ���=temp��������������Ŀ������캯��
void test4()
{
	cout << "test4 begin..." << endl;
	func2(); //����һ���������󡣵�һ����������һ�����������ʱ������ú����ⲿû���κεı���ȥ������������������󽫲����ٱ�ʹ�á���Ҫ����Ϊ�Ҳ������������󣬱�������ֱ�ӽ��������������յ�
             //�����ǵȴ�����������test4��ִ������ڻ��ա�
	//��������ͱ������ˣ�ͬʱҲ��������
	cout << "test4 end..." << endl;

}

//����5
void test5()
{
	cout << "test5 begin..." << endl;
	Test t1 = func2(); //�����ᴥ��t1�Ŀ������죬���ǽ���������������ֽ���t1.��ʱ�������������
	cout << "test5 end..." << endl;
}

//����6
void test6()
{
	cout << "test6 begin..." << endl;
	Test t1; //t1�Ѿ�����ʼ����

	t1 = func2(); //����t1�ĸ�ֵ����������ֵ�����������ϻ��ո��������󣬴˶�������

	t1.printT();
	cout << "test6 end..." << endl;
}
int main(void)
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}