#include<iostream>
using namespace std;

//��̬��Ա
class Person
{
public:
	static int m_A;
	static void func1()
	{
		cout << m_B << endl;
		cout << "��̬��Ա��������" << endl;
	}
private:
	static int m_B;
	static void func2()
	{
		cout << "��̬��Ա��������" << endl;
	}
};
int Person::m_A = 100;
int Person::m_B = 50;
int main()
{
	Person p;
	cout << p.m_A << endl;
	cout << Person::m_A << endl;
	p.func1();
	Person::func1();
	return 0;
	system("pause");
}