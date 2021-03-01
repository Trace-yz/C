#include "circle.h"

void circle::setR(double r)
{
	m_r = r;
}

double circle::getR()
{
	return m_r;
}

double circle::getArea()
{
	m_area = m_r * m_r*3.14;
	return m_area;
}

double circle::getGirth()
{
	m_girth = m_r * 2 * 3.14;
	return m_girth;
}