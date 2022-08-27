// CMakeProject-Test.cpp: 定义应用程序的入口点。
//

#include "CMakeProject-Test.h"
#include <string>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	int a = 5;
	string str("hello");
	auto b = str.c_str();
	cout << a << b << endl;
	return 0;
}
