#include<iostream>
using namespace std;

//���һ�������������캯����C++11������һ�����캯���еĶ���ʹ����һ�����캯����������ͨ����ʼ���б���в���
class A
{
public:
	//ί�й���,ֻ��ͨ���б��ʼ��
	A() :A(1,'a') {}
	A(int x) :A(x,'b') {}
	A(char y) :A(2,y) {}
	A(int x, char y) :a(x), b(y) {}
	int a;
	char b;
};
int main()
{
	A obj1;
	cout << obj1.a << endl;
	cout << obj1.b << endl;

	A obj2(1);
	cout << obj2.a << endl;
	cout << obj2.b << endl;

	A obj3('c');
	cout << obj3.a << endl;
	cout << obj3.b << endl;

	system("pause");
	return 0;
}
