#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


//定义一个命名空间
namespace spaccA {
	int g_a = 10;
}
namespace spaceB {
	int a = 20;
	namespace spaceC {
		struct teacher
		{
			int id;
			char name[64];
		};
	}
	namespace spaceD {
		struct teacher
		{
			int id;
			char name[64];
		};
	}
}

int main(void)
{
	//using spaccA::g_a;
	using namespace spaccA;;
	cout << g_a << endl;
	//spaceB::spaceC::teacher t1;

	//using spaceB::spaceC::teacher;
	//struct teacher t1;

	using namespace spaceB::spaceC;
	struct teacher t1;
	t1.id = 10;
	
	return 0;
}