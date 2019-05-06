// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CTestCopy;
{
public:
	CTestCopy();
	//CTestCopy(int a, int b);
	void setXY(int a, int b);
	void disPlay();

};
CTestCopy();
{
	x = 10;
	y = 20;
}
void setXY(int a, int b);
{
	x = a;
	x = b;
}
void disPlay();
{
	cout << "x=" << x << "y=" << endl;
}
int main()
{
	CTestCopy ocpy(123.321);
	ocpy.disPlay();
    return 0;
}

