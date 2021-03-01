#include <iostream>
//iostream这个标准库提供了一个叫命名空间的东西，标准的命令空间叫std
//方式2：
#if 0
using std::cout; //声明命令空间中的一共变量
using std::endl;
using std::cin;
#endif
//方式3
using namespace std;
int main(void)
{
	int a = 0;
#if 0

	//方式1：
	std::cout << "nihao shijie" << std::endl;
	std::cout << "nihuai shijie" << std::endl;
#endif
	cout << "nihao shijie" << endl;
	cin >> a;
	return 0;
}
