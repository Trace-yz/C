#pragma once

class circle
{
public:
    //���ð뾶
	void setR(double r);
	//�õ��뾶
	double getR();
	//�ܳ�
	double getArea();
	//���
	double getGirth();

private:
	double m_r;
	double m_area;
	double m_girth;
};

