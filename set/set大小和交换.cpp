#include<set>
#include<iostream>
using namespace std;

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(50);
	s1.insert(40);
	printSet(s1);

	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "��С��" << s1.size() << endl;
	}
	
	set<int>s2;
	s2.insert(20);
	s2.insert(20);
	s2.insert(20);
	s2.insert(20);

	cout << "����ǰ��" << endl;
	printSet(s1);
	printSet(s2);
	cout << "������" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}
int main()
{
	test1();
	system("pause");
	return 0;
}