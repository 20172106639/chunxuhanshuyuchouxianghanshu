// 纯虚函数与抽象函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CBase
{
public:
	virtual void test() = 0;
	virtual void display()
	{
		cout << "基类" << endl;
	}
};
class CDervid : public CBase
{
public:
	void test()
	{

	}
	void display()
	{
		cout << "派生类" << endl;
	}

};
int main()
{
	CBase *p;
	CDervid obj2;
	p = &obj2;
	p->display();
	p->CBase::display();
	return 0;
}

