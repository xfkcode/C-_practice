#include<iostream>
using namespace std;

class A
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
class B : public A{};
//public:int a;
//protected:int b;
//int c;���ܷ���
class C : protected A{};
//protected:int a;int b;
//int c;���ܷ���
class D : private A{};
//private:int a;int b;
//int c;���ܷ���
int main()
{
	return 0;
	system("pause");
}