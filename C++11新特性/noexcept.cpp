#include<iostream>
using namespace std;

void func1()
{
	throw 1;
}
//�������쳣
void func2()throw() {}
//C++11��д��
void func2()noexcept {}
int main()
{
	//C++11ʹ��noexcept���throw()
	//�������׳��쳣������׳����ͻ��쳣
	system("pause");
	return 0;
}