#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


class Student
{
public:
	Student(int id, double score)
	{
		m_id = id;
		m_score = score;

		m_count++;//�ۼӸ���
		sum_score += score;
	}

	static int getCount()
	{
		return m_count;
	}

	static double getAvg()
	{
		return sum_score / m_count;
	}

	~Student()
	{
		m_count--;
		sum_score -= m_score;
	}
private:
	int m_id;
	double m_score;//�÷�

	//ͳ��ѧ�������ľ�̬��Ա����
	static int m_count;

	//ͳ��ѧ���ܷ����ľ�̬��Ա����
	static double sum_score;
};

int Student::m_count = 0;
double Student::sum_score = 0.0;

int main(void)
{
	Student s1(1, 80);
	Student s2(2, 90);
	Student s3(3, 100);

	cout << "ѧ����������:" << Student::getCount() << endl;
	cout << "ѧ��ƽ����:" << Student::getAvg() << endl;
	return 0;
}