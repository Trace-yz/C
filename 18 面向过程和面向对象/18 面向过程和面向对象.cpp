#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Dog
{
public:
	void eat(char *food)
	{
		cout << name << "��" << food << endl;
	}
	char name[64];
};

//�������
void eat(class Dog &dog, char *food)
{


	cout << dog.name << "��" << food << endl;

}
int main(void)
{
	Dog dog;
	strcpy(dog.name, "��");
	char *a = new char[3];
	strcpy(a, "��");
	eat(dog, a);
	delete[]a;



	//�������
	char *b = new char[3];
	strcpy(b, "��");
	dog.eat(b);
	delete[]b;
	return 0;
}