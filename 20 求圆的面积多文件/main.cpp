#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include "circle.h"
using namespace std;

int main(void)
{
	circle c;
	c.setR(10);

	cout << "Ãæ»ý" << c.getArea() << endl;
	return 0;
}