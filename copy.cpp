// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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

