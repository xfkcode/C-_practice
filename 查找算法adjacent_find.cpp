#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

void test1()
{
	vector<int>v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(2);
	v.push_back(0);
	v.push_back(1);
	v.push_back(1);
	v.push_back(3);
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "�����ظ�δ�ҵ�" << endl;
	}
	else
	{
		cout << "�����ظ��ҵ���" << *it <<" " << *(it++) << endl;
	}
}
int main()
{
	test1();
	system("pause");
	return 0;
}