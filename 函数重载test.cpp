#include<iostream>
using namespace std;

//��������

void func(int &a)
{
	cout << "(int& a)����"<<endl;
}
void func(const int& a)
{
	cout << "(const int& a)����" << endl;
}
int main()
{
	int a = 0;
	func(a);
	func(10);
	return 0;
	system("pause");
}