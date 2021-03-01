#include <stdio.h>

int g_val; //bss¶Î
int g_val = 20;//data¶Î

struct student
{
	char name[64];
	int id;
};

foo()
{
	return 10;
}
int g(int a)
{
	return 10;
}
void test4()
{
	int a = 10;
	int b = 20;
	int c = 0;
	//×óÖµ ÓÒÖµ
	c=a < b ? a : b;
	printf("c=%d\n", c);

	//(a < b ? a : b) = 50;
	*(a < b ? &a : &b) = 50;

}
void test5()
{
	const int a = 10;
	//int array[a] = { 0 };
	int *p = &a;
	*p = 70;
	printf("a=%d\n",a);
}
enum season 
{
	SPR = 0,
    SUM,
    AUT,
    WIN
};
void test6()
{
	enum season s = 2;
	if (s == 2) {

	}
}
int main(void)
{
	int a = 10;
	int b = 20;

	struct student s1;
	s1.id = 20;
	test4();
	
	//...

	printf("%d\n", g_val);

	//g(10, 20, 30);
	printf("----------\n");
	test5();
}