#include<iostream>
using namespace std;


class A
{
public:
	//�����麯��������override����
	virtual void func(int x) {
		cout << x << endl;
	}
};
class B :public A
{
public:
	//override����Ҫ����дһģһ��
	void func(int x) override 
	{

	}
};
void funcAPI(A& a,int x)
{
	a.func(x);
}
int main()
{
	B b;
	funcAPI(b,3);
	system("pause");
	return 0;
}