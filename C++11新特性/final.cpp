#include<iostream>
using namespace std;

#if 0
class A final
{
	A(){}
	void a()
	{
		cout << "hello world!";
	}
};
class B : public A {};		//B���ɼ̳�A
#endif
class C
{
public:
	C() {}
	virtual void func() final
	{
		cout << "hello world!";
	}
};
class D : public C
{
public:
	D() {}
	//void func() {} �޷���д

};
int main()
{
	//final�������ʾ���಻�ɱ��̳�

	//final�����麯����ʾ���麯�����ɱ�������д
	//�������๲��һ�����๦�ܣ�����Ҫ��д
	return 0;
}