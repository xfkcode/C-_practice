#include<iostream>
using namespace std;

void test1()
{
	pair<string, int>p("Tom", 20);
	cout << "������" << p.first << "���䣺" << p.second << endl;
	pair<string, int>P = make_pair("Jerry", 30);
	cout << "������" << P.first << "���䣺" << P.second << endl;
}
int main()
{
	test1();
	system("pause");
	return 0;
}