#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct Hero
{
	char name[64];
	int sex;
};

class AdvHero
{
public://���ʿ���Ȩ��
	char name[64];
	int sex;
	void printHero()
	{
		cout << "advHero" << endl;
		cout << "name=" << name << endl;
		cout << "sex=" << sex << endl;
	}
};

void printHero(struct Hero *h)
{
	cout << "name=" << h->name << endl;
	cout << "set=" << h->sex << endl;
}

class Animal
{ //{}���������ڽ�����ڲ������������ⲿ
public:
	//��public���涨���Ա�����ͺ������ܹ�������ڲ����ⲿ�����Է��ʵġ�
	char kind[64];
	char color[64];

	void printAnimal()
	{
		cout << "kind=" << kind << endl;
		cout << "color=" << color << endl;
	}

	void write()
	{
		cout << kind << "��ʼд����" << endl;

	}
	void run()
	{
		cout << kind << "��ʼ�ܲ���" << endl;

	}
private:
	//��private���涨��ĳ�Ա�����ͺ���ֻ��������ڲ�����

};
int main(void)
{
	Hero h;
	strcpy(h.name, "gailun");
	h.sex = 1;
	printHero(&h);

	AdvHero advH;
	strcpy(advH.name, "chunBro");
	advH.sex = 1;
	advH.printHero();

	cout << "-------------" << endl;
	Animal dog;
	strcpy(dog.kind, "dog");
	strcpy(dog.color, "yellow");
	
	Animal sheep;
	strcpy(sheep.kind, "sheep");
	strcpy(sheep.color, "white");

	dog.write();
	sheep.run();

	return 0;
}