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
public://访问控制权限
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
{ //{}大括号以内叫类的内部，以外叫类的外部
public:
	//在public下面定义成员变量和函数是能够在类的内部和外部都可以访问的。
	char kind[64];
	char color[64];

	void printAnimal()
	{
		cout << "kind=" << kind << endl;
		cout << "color=" << color << endl;
	}

	void write()
	{
		cout << kind << "开始写字了" << endl;

	}
	void run()
	{
		cout << kind << "开始跑步了" << endl;

	}
private:
	//在private下面定义的成员变量和函数只能在类的内部访问

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