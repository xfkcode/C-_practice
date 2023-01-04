#include<iostream>
#include<functional>
using namespace std;

void func(int a, int b)
{
	cout << a << " " << b << endl;
}
int main()
{
	bind(func, 1, 2)();			//func(1,2);

	//std::placeholders::_1����������ʱ������һ�������滻
	//std::placeholders::_2����������ʱ�����ڶ��������滻
	bind(func, std::placeholders::_1, std::placeholders::_2)(11, 22);

	using namespace std::placeholders;
	bind(func, 11, _2)(22, 33, 44);			//���11,33��_2���ڶ��������滻

	system("pause");
	return 0;
}
