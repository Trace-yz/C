#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Teacher
{
public:
	Teacher(int id, char *name)
	{
		cout << "Teacher(int  ,char *)..." << endl;
		//��ֵid
		m_id = id;

		//��ֵname
		int len = strlen(name);
		m_name = (char *)malloc(len+1);
		strcpy(m_name, name);
	}

#if 0
	//Ĭ�ϵĿ������캯��
	Teacher(const Teacher &another)
	{
		m_id = another.m_id;
		m_name = another.m_name;
	}
#endif
	//��ʾ���ṩһ���������캯����������������
	Teacher(const Teacher &another)
	{
		//���
		m_id = another.m_id;
		int len = strlen(another.m_name);
		m_name = (char *)malloc(len + 1);
		strcpy(m_name, another.m_name);
	}
	void printT()
	{
		cout << "id = " << m_id << ", name = " << m_name << endl;
	}
	~Teacher()
	{
		cout << "~Teacher()...." << endl;
		if (m_name != NULL) {
			free(m_name);
			m_name = NULL;
		}
	}
private:
	int m_id;
	char *m_name;
};

void test()
{
	char len[7];
	strcpy(len, "zhang3");
	Teacher t1(100, len);

	t1.printT();

	Teacher t2(t1);

	t2.printT();
}
int main(void)
{
	test();

	return 0;
}