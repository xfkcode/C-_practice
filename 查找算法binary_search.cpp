#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

void test1()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	bool ret=binary_search(v.begin(), v.end(), 9);
	if (ret)
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}
int main()
{
	test1();
	system("pause");
	return 0;
}