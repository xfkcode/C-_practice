#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class GreaterFive
{
public:
	//һԪν��
	bool operator()(int val)
	{
		return val > 5;
	}
};
class MyCompare
{
public:
	//��Ԫν��
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test1()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	//������������û�д���5��Ԫ��
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << *it << endl;
	}
}
void test2()
{
	vector<int>v;
	v.push_back(50);
	v.push_back(20);
	v.push_back(5);
	v.push_back(505);
	sort(v.begin(), v.end(), MyCompare());
	for (int i = 0;i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}